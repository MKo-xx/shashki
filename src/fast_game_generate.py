class Gen(object):
    def __init__(self):
        self._white = "_white"
        self._black = "_black"
        self._moves = "moves"


    @staticmethod
    def man_pos_ij_to_bit(i: int, j: int):
        b = 4 * i + (j // 2)
        assert 0 <= b < 32
        return 1 << b


    @staticmethod
    def king_pos_ij_to_bit(i: int, j: int):
        b = 4 * i + (j // 2)
        assert 0 <= b < 32
        return 1 << (32 + b)


    @staticmethod
    def both_pos_ij_to_bit(i: int, j: int):
        b = 4 * i + (j // 2)
        assert 0 <= b < 32
        return (1 << b) | (1 << (b + 32))


    @staticmethod
    def tab(s: str):
        return "\n".join([("    " + l) if l else "" for l in s.split("\n")])


    @staticmethod
    def gen_debug(s: str):
        return "LOG_DEBUG(\"{}\" << \" Move = \" << moves.back());".format(s)

    @staticmethod
    def is_valid_pos(i: int, j: int):
        return ((i % 2) == 0) ^ ((j % 2) == 0)


    @staticmethod
    def gen_move_no_capture(is_capture: bool, is_white: bool, is_king: bool, si: int, sj: int, ei: int, ej: int):
        s = 4 * si + (sj // 2)
        assert 0 <= s < 32

        e = 4 * ei + (ej // 2)
        assert 0 <= e < 32

        data = s | (e << 8)

        if is_capture:
            data |= 0x8000;

        if is_white:
            data |= 0x4000;

        if is_king:
            data |= 0x2000;

        return "0x{:08x}".format(data)


    def gen_move_with_capture(self, is_capture: bool, is_white: bool, is_king: bool, si: int, sj: int, ei: int, ej: int, ci: int, cj: int):
        c = 4 * ci + (cj // 2)
        assert 0 <= c < 32

        return "{}, {}".format(self.gen_move_no_capture(is_capture, is_white, is_king, si, sj, ei, ej), c)


    def gen_if_empty(self, i: int, j: int):
        no_white = "(0 == ({} & 0x{:016x}))".format(self._white, self.both_pos_ij_to_bit(i, j))
        no_black = "(0 == ({} & 0x{:016x}))".format(self._black, self.both_pos_ij_to_bit(i, j))
        return "({} and {})".format(no_white, no_black)

    
    def gen_if_white_any(self, i: int, j: int):
        return "(0 != ({} & 0x{:016x}))".format(self._white, self.both_pos_ij_to_bit(i, j))


    def gen_if_white_man(self, i: int, j: int):
        return "(0 != ({} & 0x{:016x}))".format(self._white, self.man_pos_ij_to_bit(i, j))


    def gen_if_white_king(self, i: int, j: int):
        return "(0 != ({} & 0x{:016x}))".format(self._white, self.king_pos_ij_to_bit(i, j))


    def gen_if_black_any(self, i: int, j: int):
        return "(0 != ({} & 0x{:016x}))".format(self._black, self.both_pos_ij_to_bit(i, j))


    def gen_if_black_man(self, i: int, j: int):
        return "(0 != ({} & 0x{:016x}))".format(self._black, self.man_pos_ij_to_bit(i, j))


    def gen_if_black_king(self, i: int, j: int):
        return "(0 != ({} & 0x{:016x}))".format(self._black, self.king_pos_ij_to_bit(i, j))


    def gen_push_back(self, is_capture: bool, is_white: bool, is_king: bool, si: int, sj: int, ei: int, ej: int):
        assert not is_capture
        return "{}.push_back(Move({}));".format(self._moves, self.gen_move_with_capture(is_capture, is_white, is_king, si, sj, ei, ej, 0, 0))


    def gen_push_back_capture_pos(self, is_capture: bool, is_white: bool, is_king: bool, si: int, sj: int, ei: int, ej: int, ci: int, cj: int):
        assert is_capture
        return "{}.push_back(Move({}));".format(self._moves, self.gen_move_with_capture(is_capture, is_white, is_king, si, sj, ei, ej, ci, cj))


    def gen_push_back_capture_ind(self, is_capture: bool, is_white: bool, is_king: bool, si: int, sj: int, ei: int, ej: int, c: int):
        assert is_capture
        return "{}.push_back(Move({}, {}));".format(self._moves, self.gen_move_no_capture(is_capture, is_white, is_king, si, sj, ei, ej), c)


    def gen_man_captures(self, si: int, sj: int, is_white: bool, gen_if_op_any):
        code = ""

        if si > 1 and sj > 1:
            ci, cj = si - 1, sj - 1
            ei, ej = si - 2, sj - 2
            c  = "\n"
            c += "// Capture  UP  LEFT\n"
            c += "if ({} and {})\n".format(self.gen_if_empty(ei, ej), gen_if_op_any(ci, cj))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back_capture_pos(True, is_white, False, si, sj, ei, ej, ci, cj))
            c += "    {}\n".format(self.gen_debug(f"Capture  UP  LEFT si={si} sj={sj} ei={ei} ej={ej} ci={ci} cj={cj}"))
            c += "}\n"
            c += "\n"
            code += self.tab(c)

        if si > 1 and sj < 6:
            ci, cj = si - 1, sj + 1
            ei, ej = si - 2, sj + 2
            c  = "\n"
            c += "// Capture  UP  RIGHT\n"
            c += "if ({} and {})\n".format(self.gen_if_empty(ei, ej), gen_if_op_any(ci, cj))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back_capture_pos(True, is_white, False, si, sj, ei, ej, ci, cj))
            c += "    {}\n".format(self.gen_debug(f"Capture  UP  RIGHT si={si} sj={sj} ei={ei} ej={ej} ci={ci} cj={cj}"))
            c += "}\n"
            c += "\n"
            code += self.tab(c)

        if si < 6 and sj > 1:
            ci, cj = si + 1, sj - 1
            ei, ej = si + 2, sj - 2
            c  = "\n"
            c += "// Capture DOWN LEFT\n"
            c += "if ({} and {})\n".format(self.gen_if_empty(ei, ej), gen_if_op_any(ci, cj))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back_capture_pos(True, is_white, False, si, sj, ei, ej, ci, cj))
            c += "    {}\n".format(self.gen_debug(f"Capture  UP  RIGHT si={si} sj={sj} ei={ei} ej={ej} ci={ci} cj={cj}"))
            c += "}\n"
            c += "\n"
            code += self.tab(c)

        if si < 6 and sj < 6:
            ci, cj = si + 1, sj + 1
            ei, ej = si + 2, sj + 2
            c  = "\n"
            c += "// Capture DOWN RIGHT\n"
            c += "if ({} and {})\n".format(self.gen_if_empty(ei, ej), gen_if_op_any(ci, cj))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back_capture_pos(True, is_white, False, si, sj, ei, ej, ci, cj))
            c += "    {}\n".format(self.gen_debug(f"Capture  UP  RIGHT si={si} sj={sj} ei={ei} ej={ej} ci={ci} cj={cj}"))
            c += "}\n"
            c += "\n"
            code += self.tab(c)

        return code


    def gen_white_man_moves(self, si: int, sj: int):
        if not self.is_valid_pos(si, sj):
            return ""

        code = f"\n// White Man i={si} j={sj}\n"
        code += "if ({})\n".format(self.gen_if_white_man(si, sj))
        code += "{\n"

        if si > 0 and sj > 0:
            ei, ej = si - 1, sj - 1
            c  = "\n"
            c += "// Move  UP  LEFT\n"
            c += "if ({})\n".format(self.gen_if_empty(ei, ej))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back(False, True, False, si, sj, ei, ej))
            c += "    {}\n".format(self.gen_debug(f"Move  UP  LEFT si={si} sj={sj} ei={ei} ej={ej}"))
            c += "}\n"
            code += self.tab(c)

        if si > 0 and sj < 7:
            ei, ej = si - 1, sj + 1
            c  = "\n"
            c += "// Move  UP  RIGHT\n"
            c += "if ({})\n".format(self.gen_if_empty(ei, ej))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back(False, True, False, si, sj, ei, ej))
            c += "    {}\n".format(self.gen_debug(f"Move  UP  RIGHT si={si} sj={sj} ei={ei} ej={ej}"))
            c += "}\n"
            code += self.tab(c)

        code += self.gen_man_captures(si, sj, True, self.gen_if_black_any)

        code += "}\n"

        return code


    def gen_black_man_moves(self, si: int, sj: int):
        if not self.is_valid_pos(si, sj):
            return ""

        code = f"// Black Man i={si} j={sj}\n"
        code += "if ({})\n".format(self.gen_if_black_man(si, sj))
        code += "{\n"

        if si < 7 and sj > 0:
            ei, ej = si + 1, sj - 1
            c  = "\n"
            c += "// Move DOWN LEFT\n"
            c += "if ({})\n".format(self.gen_if_empty(ei, ej))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back(False, False, False, si, sj, ei, ej))
            c += "    {}\n".format(self.gen_debug(f"Move DOWN LEFT si={si} sj={sj} ei={ei} ej={ej}"))
            c += "}\n"
            code += self.tab(c)

        if si < 7 and sj < 7:
            ei, ej = si + 1, sj + 1
            c  = "\n"
            c += "// Move DOWN RIGHT\n"
            c += "if ({})\n".format(self.gen_if_empty(ei, ej))
            c += "{\n"
            c += "    {}\n".format(self.gen_push_back(False, False, False, si, sj, ei, ej))
            c += "    {}\n".format(self.gen_debug("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}"))
            c += "}\n"
            code += self.tab(c)

        code += self.gen_man_captures(si, sj, False, self.gen_if_white_any)

        code += "}\n"

        return code


    def gen_iter_diagonal(self, msg: str, i: int, j: int, checki, checkj, movei, movej, is_white: bool, gen_if_my, gen_if_op):
        code = "\n"
        code += "// {}\n".format(msg)
        code += "do\n"
        code += "{\n"
        code += "    bool isCapture = false;\n"
        code += "    uint8_t c = 0;\n"
        ii = i
        jj = j
        while checki(ii) and checkj(jj):
            ii = movei(ii)
            jj = movej(jj)
            code += "\n"
            code += "    // to i={} j={}\n".format(ii, jj)
            code += "    if ({})\n".format(self.gen_if_empty(ii, jj))
            code += "    {\n"
            code += "        if (isCapture)\n"
            code += "        {\n"
            code += "            {}\n".format(self.gen_push_back_capture_ind(True, is_white, True, i, j, ii, jj, "c"))
            code += "            {}\n".format(self.gen_debug("Capture {} si={} sj={} ei={} ej={}".format(msg, i, j, ii, jj)))
            code += "        }\n"
            code += "        else\n"
            code += "        {\n"
            code += "            {}\n".format(self.gen_push_back(False, is_white, True, i, j, ii, jj))
            code += "            {}\n".format(self.gen_debug("Move {} si={} sj={} ei={} ej={}".format(msg, i, j, ii, jj)))
            code += "        }\n"
            code += "    }\n"
            code += "    else if ({})\n".format(gen_if_my(ii, jj))
            code += "    {\n"
            code += "        break;\n"
            code += "    }\n"
            code += "    else if ({})\n".format(gen_if_op(ii, jj))
            code += "    {\n"
            code += "        if (isCapture)\n"
            code += "        {\n"
            code += "            break;\n"
            code += "        }\n"
            code += "        isCapture = true;\n"
            code += "        c={};\n".format(4 * ii + (jj // 2))
            code += "    }\n"
        code += "}\n"
        code += "while(false);\n"
        return code


    def gen_king_moves(self, i: int, j: int, is_white: bool, gen_if_my_king, gen_if_my, gen_if_op):
        code = "\n// White King i={} j={}\n".format(i, j)

        inc = lambda x : x + 1
        dec = lambda x : x - 1
        gt0 = lambda x : x > 0
        lt7 = lambda x : x < 7

        code += "if ({})\n".format(gen_if_my_king(i, j))
        code += "{\n"

        code += self.tab(self.gen_iter_diagonal("UP LEFT",
                                                i, j,
                                                gt0, gt0,
                                                dec, dec,
                                                is_white, gen_if_my, gen_if_op))

        code += self.tab(self.gen_iter_diagonal("UP RIGHT",
                                                i, j,
                                                gt0, lt7,
                                                dec, inc,
                                                is_white, gen_if_my, gen_if_op))

        code += self.tab(self.gen_iter_diagonal("DOWN LEFT",
                                                i, j,
                                                lt7, gt0,
                                                inc, dec,
                                                is_white, gen_if_my, gen_if_op))

        code += self.tab(self.gen_iter_diagonal("DOWN RIGHT",
                                                i, j,
                                                lt7, lt7,
                                                inc, inc,
                                                is_white, gen_if_my, gen_if_op))

        code += "}\n"
        return code


    def gen_white_king_moves(self, i: int, j: int):
        if not self.is_valid_pos(i, j):
            return ""

        return self.gen_king_moves(i, j, True, self.gen_if_white_king, self.gen_if_white_any, self.gen_if_black_any)


    def gen_black_king_moves(self, i: int, j: int):
        if not self.is_valid_pos(i, j):
            return ""

        return self.gen_king_moves(i, j, False, self.gen_if_black_king, self.gen_if_black_any, self.gen_if_white_any)


    def gen_all(self, man_moves, king_moves):
        code = ""
        for i in range(8):
            for j in range(8):
                code += man_moves(i, j)
        for i in range(8):
            for j in range(8):
                code += king_moves(i, j)
        return code
        

    def gen_white_all(self):
        return self.gen_all(self.gen_white_man_moves, self.gen_white_king_moves)


    def gen_black_all(self):
        return self.gen_all(self.gen_black_man_moves, self.gen_black_king_moves)


g = Gen()

code = """
if (Side::White == side_)
{{
{}
}}
else
{{
{}
}}
""".format(g.tab(g.gen_white_all()), g.tab(g.gen_black_all()))
print(code)

