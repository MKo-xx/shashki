
if (Side::White == side_)
{

    // White Man i=0 j=1
    if ((0 != (_white & 0x0000000000000001)))
    {

        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_black & 0x0000002000000020)))
        {
            moves.push_back(Move(0x0000c900, 5));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=1 ei=2 ej=3 ci=1 cj=2" << " Move = " << moves.back());
        }

    }

    // White Man i=0 j=3
    if ((0 != (_white & 0x0000000000000002)))
    {

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))) and (0 != (_black & 0x0000002000000020)))
        {
            moves.push_back(Move(0x0000c801, 5));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=3 ei=2 ej=1 ci=1 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_black & 0x0000004000000040)))
        {
            moves.push_back(Move(0x0000ca01, 6));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=3 ei=2 ej=5 ci=1 cj=4" << " Move = " << moves.back());
        }

    }

    // White Man i=0 j=5
    if ((0 != (_white & 0x0000000000000004)))
    {

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_black & 0x0000004000000040)))
        {
            moves.push_back(Move(0x0000c902, 6));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=5 ei=2 ej=3 ci=1 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))) and (0 != (_black & 0x0000008000000080)))
        {
            moves.push_back(Move(0x0000cb02, 7));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=5 ei=2 ej=7 ci=1 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=0 j=7
    if ((0 != (_white & 0x0000000000000008)))
    {

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_black & 0x0000008000000080)))
        {
            moves.push_back(Move(0x0000ca03, 7));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=7 ei=2 ej=5 ci=1 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=1 j=0
    if ((0 != (_white & 0x0000000000000010)))
    {

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
        {
            moves.push_back(Move(0x00004004, 0));
            LOG_DEBUG("Move  UP  RIGHT si=1 sj=0 ei=0 ej=1" << " Move = " << moves.back());
        }

        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_black & 0x0000010000000100)))
        {
            moves.push_back(Move(0x0000cd04, 8));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=0 ei=3 ej=2 ci=2 cj=1" << " Move = " << moves.back());
        }

    }

    // White Man i=1 j=2
    if ((0 != (_white & 0x0000000000000020)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
        {
            moves.push_back(Move(0x00004005, 0));
            LOG_DEBUG("Move  UP  LEFT si=1 sj=2 ei=0 ej=1" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
        {
            moves.push_back(Move(0x00004105, 0));
            LOG_DEBUG("Move  UP  RIGHT si=1 sj=2 ei=0 ej=3" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))) and (0 != (_black & 0x0000010000000100)))
        {
            moves.push_back(Move(0x0000cc05, 8));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=2 ei=3 ej=0 ci=2 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_black & 0x0000020000000200)))
        {
            moves.push_back(Move(0x0000ce05, 9));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=2 ei=3 ej=4 ci=2 cj=3" << " Move = " << moves.back());
        }

    }

    // White Man i=1 j=4
    if ((0 != (_white & 0x0000000000000040)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
        {
            moves.push_back(Move(0x00004106, 0));
            LOG_DEBUG("Move  UP  LEFT si=1 sj=4 ei=0 ej=3" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
        {
            moves.push_back(Move(0x00004206, 0));
            LOG_DEBUG("Move  UP  RIGHT si=1 sj=4 ei=0 ej=5" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_black & 0x0000020000000200)))
        {
            moves.push_back(Move(0x0000cd06, 9));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=4 ei=3 ej=2 ci=2 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))) and (0 != (_black & 0x0000040000000400)))
        {
            moves.push_back(Move(0x0000cf06, 10));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=4 ei=3 ej=6 ci=2 cj=5" << " Move = " << moves.back());
        }

    }

    // White Man i=1 j=6
    if ((0 != (_white & 0x0000000000000080)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
        {
            moves.push_back(Move(0x00004207, 0));
            LOG_DEBUG("Move  UP  LEFT si=1 sj=6 ei=0 ej=5" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
        {
            moves.push_back(Move(0x00004307, 0));
            LOG_DEBUG("Move  UP  RIGHT si=1 sj=6 ei=0 ej=7" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_black & 0x0000040000000400)))
        {
            moves.push_back(Move(0x0000ce07, 10));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=6 ei=3 ej=4 ci=2 cj=5" << " Move = " << moves.back());
        }

    }

    // White Man i=2 j=1
    if ((0 != (_white & 0x0000000000000100)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
        {
            moves.push_back(Move(0x00004408, 0));
            LOG_DEBUG("Move  UP  LEFT si=2 sj=1 ei=1 ej=0" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
        {
            moves.push_back(Move(0x00004508, 0));
            LOG_DEBUG("Move  UP  RIGHT si=2 sj=1 ei=1 ej=2" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))) and (0 != (_black & 0x0000002000000020)))
        {
            moves.push_back(Move(0x0000c108, 5));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=1 ei=0 ej=3 ci=1 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_black & 0x0000200000002000)))
        {
            moves.push_back(Move(0x0000d108, 13));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=1 ei=4 ej=3 ci=3 cj=2" << " Move = " << moves.back());
        }

    }

    // White Man i=2 j=3
    if ((0 != (_white & 0x0000000000000200)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
        {
            moves.push_back(Move(0x00004509, 0));
            LOG_DEBUG("Move  UP  LEFT si=2 sj=3 ei=1 ej=2" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
        {
            moves.push_back(Move(0x00004609, 0));
            LOG_DEBUG("Move  UP  RIGHT si=2 sj=3 ei=1 ej=4" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))) and (0 != (_black & 0x0000002000000020)))
        {
            moves.push_back(Move(0x0000c009, 5));
            LOG_DEBUG("Capture  UP  LEFT si=2 sj=3 ei=0 ej=1 ci=1 cj=2" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))) and (0 != (_black & 0x0000004000000040)))
        {
            moves.push_back(Move(0x0000c209, 6));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=3 ei=0 ej=5 ci=1 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))) and (0 != (_black & 0x0000200000002000)))
        {
            moves.push_back(Move(0x0000d009, 13));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=3 ei=4 ej=1 ci=3 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_black & 0x0000400000004000)))
        {
            moves.push_back(Move(0x0000d209, 14));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=3 ei=4 ej=5 ci=3 cj=4" << " Move = " << moves.back());
        }

    }

    // White Man i=2 j=5
    if ((0 != (_white & 0x0000000000000400)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
        {
            moves.push_back(Move(0x0000460a, 0));
            LOG_DEBUG("Move  UP  LEFT si=2 sj=5 ei=1 ej=4" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
        {
            moves.push_back(Move(0x0000470a, 0));
            LOG_DEBUG("Move  UP  RIGHT si=2 sj=5 ei=1 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))) and (0 != (_black & 0x0000004000000040)))
        {
            moves.push_back(Move(0x0000c10a, 6));
            LOG_DEBUG("Capture  UP  LEFT si=2 sj=5 ei=0 ej=3 ci=1 cj=4" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))) and (0 != (_black & 0x0000008000000080)))
        {
            moves.push_back(Move(0x0000c30a, 7));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=5 ei=0 ej=7 ci=1 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_black & 0x0000400000004000)))
        {
            moves.push_back(Move(0x0000d10a, 14));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=5 ei=4 ej=3 ci=3 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))) and (0 != (_black & 0x0000800000008000)))
        {
            moves.push_back(Move(0x0000d30a, 15));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=5 ei=4 ej=7 ci=3 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=2 j=7
    if ((0 != (_white & 0x0000000000000800)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
        {
            moves.push_back(Move(0x0000470b, 0));
            LOG_DEBUG("Move  UP  LEFT si=2 sj=7 ei=1 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))) and (0 != (_black & 0x0000008000000080)))
        {
            moves.push_back(Move(0x0000c20b, 7));
            LOG_DEBUG("Capture  UP  LEFT si=2 sj=7 ei=0 ej=5 ci=1 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_black & 0x0000800000008000)))
        {
            moves.push_back(Move(0x0000d20b, 15));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=7 ei=4 ej=5 ci=3 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=3 j=0
    if ((0 != (_white & 0x0000000000001000)))
    {

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
        {
            moves.push_back(Move(0x0000480c, 0));
            LOG_DEBUG("Move  UP  RIGHT si=3 sj=0 ei=2 ej=1" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))) and (0 != (_black & 0x0000010000000100)))
        {
            moves.push_back(Move(0x0000c50c, 8));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=0 ei=1 ej=2 ci=2 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_black & 0x0001000000010000)))
        {
            moves.push_back(Move(0x0000d50c, 16));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=0 ei=5 ej=2 ci=4 cj=1" << " Move = " << moves.back());
        }

    }

    // White Man i=3 j=2
    if ((0 != (_white & 0x0000000000002000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
        {
            moves.push_back(Move(0x0000480d, 0));
            LOG_DEBUG("Move  UP  LEFT si=3 sj=2 ei=2 ej=1" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
        {
            moves.push_back(Move(0x0000490d, 0));
            LOG_DEBUG("Move  UP  RIGHT si=3 sj=2 ei=2 ej=3" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))) and (0 != (_black & 0x0000010000000100)))
        {
            moves.push_back(Move(0x0000c40d, 8));
            LOG_DEBUG("Capture  UP  LEFT si=3 sj=2 ei=1 ej=0 ci=2 cj=1" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))) and (0 != (_black & 0x0000020000000200)))
        {
            moves.push_back(Move(0x0000c60d, 9));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=2 ei=1 ej=4 ci=2 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))) and (0 != (_black & 0x0001000000010000)))
        {
            moves.push_back(Move(0x0000d40d, 16));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=2 ei=5 ej=0 ci=4 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_black & 0x0002000000020000)))
        {
            moves.push_back(Move(0x0000d60d, 17));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=2 ei=5 ej=4 ci=4 cj=3" << " Move = " << moves.back());
        }

    }

    // White Man i=3 j=4
    if ((0 != (_white & 0x0000000000004000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
        {
            moves.push_back(Move(0x0000490e, 0));
            LOG_DEBUG("Move  UP  LEFT si=3 sj=4 ei=2 ej=3" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
        {
            moves.push_back(Move(0x00004a0e, 0));
            LOG_DEBUG("Move  UP  RIGHT si=3 sj=4 ei=2 ej=5" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))) and (0 != (_black & 0x0000020000000200)))
        {
            moves.push_back(Move(0x0000c50e, 9));
            LOG_DEBUG("Capture  UP  LEFT si=3 sj=4 ei=1 ej=2 ci=2 cj=3" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))) and (0 != (_black & 0x0000040000000400)))
        {
            moves.push_back(Move(0x0000c70e, 10));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=4 ei=1 ej=6 ci=2 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_black & 0x0002000000020000)))
        {
            moves.push_back(Move(0x0000d50e, 17));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=4 ei=5 ej=2 ci=4 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))) and (0 != (_black & 0x0004000000040000)))
        {
            moves.push_back(Move(0x0000d70e, 18));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=4 ei=5 ej=6 ci=4 cj=5" << " Move = " << moves.back());
        }

    }

    // White Man i=3 j=6
    if ((0 != (_white & 0x0000000000008000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
        {
            moves.push_back(Move(0x00004a0f, 0));
            LOG_DEBUG("Move  UP  LEFT si=3 sj=6 ei=2 ej=5" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
        {
            moves.push_back(Move(0x00004b0f, 0));
            LOG_DEBUG("Move  UP  RIGHT si=3 sj=6 ei=2 ej=7" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))) and (0 != (_black & 0x0000040000000400)))
        {
            moves.push_back(Move(0x0000c60f, 10));
            LOG_DEBUG("Capture  UP  LEFT si=3 sj=6 ei=1 ej=4 ci=2 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_black & 0x0004000000040000)))
        {
            moves.push_back(Move(0x0000d60f, 18));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=6 ei=5 ej=4 ci=4 cj=5" << " Move = " << moves.back());
        }

    }

    // White Man i=4 j=1
    if ((0 != (_white & 0x0000000000010000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
        {
            moves.push_back(Move(0x00004c10, 0));
            LOG_DEBUG("Move  UP  LEFT si=4 sj=1 ei=3 ej=0" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
        {
            moves.push_back(Move(0x00004d10, 0));
            LOG_DEBUG("Move  UP  RIGHT si=4 sj=1 ei=3 ej=2" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_black & 0x0000200000002000)))
        {
            moves.push_back(Move(0x0000c910, 13));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=1 ei=2 ej=3 ci=3 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))) and (0 != (_black & 0x0020000000200000)))
        {
            moves.push_back(Move(0x0000d910, 21));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=1 ei=6 ej=3 ci=5 cj=2" << " Move = " << moves.back());
        }

    }

    // White Man i=4 j=3
    if ((0 != (_white & 0x0000000000020000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
        {
            moves.push_back(Move(0x00004d11, 0));
            LOG_DEBUG("Move  UP  LEFT si=4 sj=3 ei=3 ej=2" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
        {
            moves.push_back(Move(0x00004e11, 0));
            LOG_DEBUG("Move  UP  RIGHT si=4 sj=3 ei=3 ej=4" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))) and (0 != (_black & 0x0000200000002000)))
        {
            moves.push_back(Move(0x0000c811, 13));
            LOG_DEBUG("Capture  UP  LEFT si=4 sj=3 ei=2 ej=1 ci=3 cj=2" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_black & 0x0000400000004000)))
        {
            moves.push_back(Move(0x0000ca11, 14));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=3 ei=2 ej=5 ci=3 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))) and (0 != (_black & 0x0020000000200000)))
        {
            moves.push_back(Move(0x0000d811, 21));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=3 ei=6 ej=1 ci=5 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))) and (0 != (_black & 0x0040000000400000)))
        {
            moves.push_back(Move(0x0000da11, 22));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=3 ei=6 ej=5 ci=5 cj=4" << " Move = " << moves.back());
        }

    }

    // White Man i=4 j=5
    if ((0 != (_white & 0x0000000000040000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
        {
            moves.push_back(Move(0x00004e12, 0));
            LOG_DEBUG("Move  UP  LEFT si=4 sj=5 ei=3 ej=4" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
        {
            moves.push_back(Move(0x00004f12, 0));
            LOG_DEBUG("Move  UP  RIGHT si=4 sj=5 ei=3 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_black & 0x0000400000004000)))
        {
            moves.push_back(Move(0x0000c912, 14));
            LOG_DEBUG("Capture  UP  LEFT si=4 sj=5 ei=2 ej=3 ci=3 cj=4" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))) and (0 != (_black & 0x0000800000008000)))
        {
            moves.push_back(Move(0x0000cb12, 15));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=5 ei=2 ej=7 ci=3 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))) and (0 != (_black & 0x0040000000400000)))
        {
            moves.push_back(Move(0x0000d912, 22));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=5 ei=6 ej=3 ci=5 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))) and (0 != (_black & 0x0080000000800000)))
        {
            moves.push_back(Move(0x0000db12, 23));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=5 ei=6 ej=7 ci=5 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=4 j=7
    if ((0 != (_white & 0x0000000000080000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
        {
            moves.push_back(Move(0x00004f13, 0));
            LOG_DEBUG("Move  UP  LEFT si=4 sj=7 ei=3 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_black & 0x0000800000008000)))
        {
            moves.push_back(Move(0x0000ca13, 15));
            LOG_DEBUG("Capture  UP  LEFT si=4 sj=7 ei=2 ej=5 ci=3 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))) and (0 != (_black & 0x0080000000800000)))
        {
            moves.push_back(Move(0x0000da13, 23));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=7 ei=6 ej=5 ci=5 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=5 j=0
    if ((0 != (_white & 0x0000000000100000)))
    {

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
        {
            moves.push_back(Move(0x00005014, 0));
            LOG_DEBUG("Move  UP  RIGHT si=5 sj=0 ei=4 ej=1" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_black & 0x0001000000010000)))
        {
            moves.push_back(Move(0x0000cd14, 16));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=0 ei=3 ej=2 ci=4 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))) and (0 != (_black & 0x0100000001000000)))
        {
            moves.push_back(Move(0x0000dd14, 24));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=0 ei=7 ej=2 ci=6 cj=1" << " Move = " << moves.back());
        }

    }

    // White Man i=5 j=2
    if ((0 != (_white & 0x0000000000200000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
        {
            moves.push_back(Move(0x00005015, 0));
            LOG_DEBUG("Move  UP  LEFT si=5 sj=2 ei=4 ej=1" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
        {
            moves.push_back(Move(0x00005115, 0));
            LOG_DEBUG("Move  UP  RIGHT si=5 sj=2 ei=4 ej=3" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))) and (0 != (_black & 0x0001000000010000)))
        {
            moves.push_back(Move(0x0000cc15, 16));
            LOG_DEBUG("Capture  UP  LEFT si=5 sj=2 ei=3 ej=0 ci=4 cj=1" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_black & 0x0002000000020000)))
        {
            moves.push_back(Move(0x0000ce15, 17));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=2 ei=3 ej=4 ci=4 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))) and (0 != (_black & 0x0100000001000000)))
        {
            moves.push_back(Move(0x0000dc15, 24));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=2 ei=7 ej=0 ci=6 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))) and (0 != (_black & 0x0200000002000000)))
        {
            moves.push_back(Move(0x0000de15, 25));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=2 ei=7 ej=4 ci=6 cj=3" << " Move = " << moves.back());
        }

    }

    // White Man i=5 j=4
    if ((0 != (_white & 0x0000000000400000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
        {
            moves.push_back(Move(0x00005116, 0));
            LOG_DEBUG("Move  UP  LEFT si=5 sj=4 ei=4 ej=3" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
        {
            moves.push_back(Move(0x00005216, 0));
            LOG_DEBUG("Move  UP  RIGHT si=5 sj=4 ei=4 ej=5" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_black & 0x0002000000020000)))
        {
            moves.push_back(Move(0x0000cd16, 17));
            LOG_DEBUG("Capture  UP  LEFT si=5 sj=4 ei=3 ej=2 ci=4 cj=3" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))) and (0 != (_black & 0x0004000000040000)))
        {
            moves.push_back(Move(0x0000cf16, 18));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=4 ei=3 ej=6 ci=4 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))) and (0 != (_black & 0x0200000002000000)))
        {
            moves.push_back(Move(0x0000dd16, 25));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=4 ei=7 ej=2 ci=6 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))) and (0 != (_black & 0x0400000004000000)))
        {
            moves.push_back(Move(0x0000df16, 26));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=4 ei=7 ej=6 ci=6 cj=5" << " Move = " << moves.back());
        }

    }

    // White Man i=5 j=6
    if ((0 != (_white & 0x0000000000800000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
        {
            moves.push_back(Move(0x00005217, 0));
            LOG_DEBUG("Move  UP  LEFT si=5 sj=6 ei=4 ej=5" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
        {
            moves.push_back(Move(0x00005317, 0));
            LOG_DEBUG("Move  UP  RIGHT si=5 sj=6 ei=4 ej=7" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_black & 0x0004000000040000)))
        {
            moves.push_back(Move(0x0000ce17, 18));
            LOG_DEBUG("Capture  UP  LEFT si=5 sj=6 ei=3 ej=4 ci=4 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))) and (0 != (_black & 0x0400000004000000)))
        {
            moves.push_back(Move(0x0000de17, 26));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=6 ei=7 ej=4 ci=6 cj=5" << " Move = " << moves.back());
        }

    }

    // White Man i=6 j=1
    if ((0 != (_white & 0x0000000001000000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
        {
            moves.push_back(Move(0x00005418, 0));
            LOG_DEBUG("Move  UP  LEFT si=6 sj=1 ei=5 ej=0" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
        {
            moves.push_back(Move(0x00005518, 0));
            LOG_DEBUG("Move  UP  RIGHT si=6 sj=1 ei=5 ej=2" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_black & 0x0020000000200000)))
        {
            moves.push_back(Move(0x0000d118, 21));
            LOG_DEBUG("Capture  UP  RIGHT si=6 sj=1 ei=4 ej=3 ci=5 cj=2" << " Move = " << moves.back());
        }

    }

    // White Man i=6 j=3
    if ((0 != (_white & 0x0000000002000000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
        {
            moves.push_back(Move(0x00005519, 0));
            LOG_DEBUG("Move  UP  LEFT si=6 sj=3 ei=5 ej=2" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
        {
            moves.push_back(Move(0x00005619, 0));
            LOG_DEBUG("Move  UP  RIGHT si=6 sj=3 ei=5 ej=4" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))) and (0 != (_black & 0x0020000000200000)))
        {
            moves.push_back(Move(0x0000d019, 21));
            LOG_DEBUG("Capture  UP  LEFT si=6 sj=3 ei=4 ej=1 ci=5 cj=2" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_black & 0x0040000000400000)))
        {
            moves.push_back(Move(0x0000d219, 22));
            LOG_DEBUG("Capture  UP  RIGHT si=6 sj=3 ei=4 ej=5 ci=5 cj=4" << " Move = " << moves.back());
        }

    }

    // White Man i=6 j=5
    if ((0 != (_white & 0x0000000004000000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
        {
            moves.push_back(Move(0x0000561a, 0));
            LOG_DEBUG("Move  UP  LEFT si=6 sj=5 ei=5 ej=4" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
        {
            moves.push_back(Move(0x0000571a, 0));
            LOG_DEBUG("Move  UP  RIGHT si=6 sj=5 ei=5 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_black & 0x0040000000400000)))
        {
            moves.push_back(Move(0x0000d11a, 22));
            LOG_DEBUG("Capture  UP  LEFT si=6 sj=5 ei=4 ej=3 ci=5 cj=4" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))) and (0 != (_black & 0x0080000000800000)))
        {
            moves.push_back(Move(0x0000d31a, 23));
            LOG_DEBUG("Capture  UP  RIGHT si=6 sj=5 ei=4 ej=7 ci=5 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=6 j=7
    if ((0 != (_white & 0x0000000008000000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
        {
            moves.push_back(Move(0x0000571b, 0));
            LOG_DEBUG("Move  UP  LEFT si=6 sj=7 ei=5 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_black & 0x0080000000800000)))
        {
            moves.push_back(Move(0x0000d21b, 23));
            LOG_DEBUG("Capture  UP  LEFT si=6 sj=7 ei=4 ej=5 ci=5 cj=6" << " Move = " << moves.back());
        }

    }

    // White Man i=7 j=0
    if ((0 != (_white & 0x0000000010000000)))
    {

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
        {
            moves.push_back(Move(0x0000581c, 0));
            LOG_DEBUG("Move  UP  RIGHT si=7 sj=0 ei=6 ej=1" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_black & 0x0100000001000000)))
        {
            moves.push_back(Move(0x0000d51c, 24));
            LOG_DEBUG("Capture  UP  RIGHT si=7 sj=0 ei=5 ej=2 ci=6 cj=1" << " Move = " << moves.back());
        }

    }

    // White Man i=7 j=2
    if ((0 != (_white & 0x0000000020000000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
        {
            moves.push_back(Move(0x0000581d, 0));
            LOG_DEBUG("Move  UP  LEFT si=7 sj=2 ei=6 ej=1" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
        {
            moves.push_back(Move(0x0000591d, 0));
            LOG_DEBUG("Move  UP  RIGHT si=7 sj=2 ei=6 ej=3" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))) and (0 != (_black & 0x0100000001000000)))
        {
            moves.push_back(Move(0x0000d41d, 24));
            LOG_DEBUG("Capture  UP  LEFT si=7 sj=2 ei=5 ej=0 ci=6 cj=1" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_black & 0x0200000002000000)))
        {
            moves.push_back(Move(0x0000d61d, 25));
            LOG_DEBUG("Capture  UP  RIGHT si=7 sj=2 ei=5 ej=4 ci=6 cj=3" << " Move = " << moves.back());
        }

    }

    // White Man i=7 j=4
    if ((0 != (_white & 0x0000000040000000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
        {
            moves.push_back(Move(0x0000591e, 0));
            LOG_DEBUG("Move  UP  LEFT si=7 sj=4 ei=6 ej=3" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
        {
            moves.push_back(Move(0x00005a1e, 0));
            LOG_DEBUG("Move  UP  RIGHT si=7 sj=4 ei=6 ej=5" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_black & 0x0200000002000000)))
        {
            moves.push_back(Move(0x0000d51e, 25));
            LOG_DEBUG("Capture  UP  LEFT si=7 sj=4 ei=5 ej=2 ci=6 cj=3" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))) and (0 != (_black & 0x0400000004000000)))
        {
            moves.push_back(Move(0x0000d71e, 26));
            LOG_DEBUG("Capture  UP  RIGHT si=7 sj=4 ei=5 ej=6 ci=6 cj=5" << " Move = " << moves.back());
        }

    }

    // White Man i=7 j=6
    if ((0 != (_white & 0x0000000080000000)))
    {

        // Move  UP  LEFT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
        {
            moves.push_back(Move(0x00005a1f, 0));
            LOG_DEBUG("Move  UP  LEFT si=7 sj=6 ei=6 ej=5" << " Move = " << moves.back());
        }

        // Move  UP  RIGHT
        if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
        {
            moves.push_back(Move(0x00005b1f, 0));
            LOG_DEBUG("Move  UP  RIGHT si=7 sj=6 ei=6 ej=7" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_black & 0x0400000004000000)))
        {
            moves.push_back(Move(0x0000d61f, 26));
            LOG_DEBUG("Capture  UP  LEFT si=7 sj=6 ei=5 ej=4 ci=6 cj=5" << " Move = " << moves.back());
        }

    }

    // White King i=0 j=1
    if ((0 != (_white & 0x0000000100000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e400, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006400, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e500, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006500, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e900, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006900, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee00, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e00, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f200, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007200, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f700, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007700, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fb00, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007b00, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=0 j=3
    if ((0 != (_white & 0x0000000200000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e501, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006501, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e801, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006801, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ec01, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006c01, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e601, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006601, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea01, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a01, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef01, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f01, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f301, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007301, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=0 j=5
    if ((0 != (_white & 0x0000000400000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e602, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006602, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e902, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006902, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed02, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d02, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f002, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007002, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f402, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007402, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e702, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006702, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000eb02, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006b02, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);
    }

    // White King i=0 j=7
    if ((0 != (_white & 0x0000000800000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e703, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006703, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea03, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a03, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee03, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e03, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f103, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007103, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f503, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007503, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f803, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007803, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fc03, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007c03, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=1 j=0
    if ((0 != (_white & 0x0000001000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e004, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=0 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006004, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=0 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e804, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006804, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed04, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d04, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f104, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007104, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f604, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007604, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa04, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a04, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ff04, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007f04, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=1 j=2
    if ((0 != (_white & 0x0000002000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e005, c));
                    LOG_DEBUG("Capture UP LEFT si=1 sj=2 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006005, 0));
                    LOG_DEBUG("Move UP LEFT si=1 sj=2 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e105, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=2 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006105, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=2 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e805, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006805, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ec05, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006c05, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e905, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006905, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee05, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e05, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f205, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007205, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f705, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007705, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fb05, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007b05, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=1 j=4
    if ((0 != (_white & 0x0000004000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e106, c));
                    LOG_DEBUG("Capture UP LEFT si=1 sj=4 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006106, 0));
                    LOG_DEBUG("Move UP LEFT si=1 sj=4 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e206, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=4 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006206, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=4 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e906, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006906, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed06, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d06, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f006, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007006, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f406, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007406, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea06, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a06, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef06, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f06, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f306, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007306, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=1 j=6
    if ((0 != (_white & 0x0000008000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e207, c));
                    LOG_DEBUG("Capture UP LEFT si=1 sj=6 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006207, 0));
                    LOG_DEBUG("Move UP LEFT si=1 sj=6 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e307, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=6 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006307, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=6 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea07, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a07, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee07, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e07, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f107, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007107, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f507, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007507, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f807, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007807, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fc07, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007c07, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000eb07, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006b07, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);
    }

    // White King i=2 j=1
    if ((0 != (_white & 0x0000010000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e408, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006408, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e508, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006508, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e108, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=1 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006108, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=1 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ec08, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006c08, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed08, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d08, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f108, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007108, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f608, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007608, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa08, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a08, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ff08, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007f08, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=2 j=3
    if ((0 != (_white & 0x0000020000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e509, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006509, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e009, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=3 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006009, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=3 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e609, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006609, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e209, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=3 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006209, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=3 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed09, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d09, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f009, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007009, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f409, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=3 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007409, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=3 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee09, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e09, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f209, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007209, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f709, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007709, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fb09, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007b09, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=2 j=5
    if ((0 != (_white & 0x0000040000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e60a, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000660a, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e10a, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=5 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000610a, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=5 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e70a, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000670a, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e30a, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=5 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000630a, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=5 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee0a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e0a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f10a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000710a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f50a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000750a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f80a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000780a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fc0a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007c0a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef0a, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f0a, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f30a, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000730a, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=2 j=7
    if ((0 != (_white & 0x0000080000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e70b, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000670b, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e20b, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=7 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000620b, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=7 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef0b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f0b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f20b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000720b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f60b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000760b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f90b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000790b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fd0b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007d0b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=3 j=0
    if ((0 != (_white & 0x0000100000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e80c, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000680c, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e50c, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=0 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000650c, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=0 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e10c, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=0 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000610c, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=0 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f00c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000700c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f50c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000750c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f90c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000790c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fe0c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007e0c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=3 j=2
    if ((0 != (_white & 0x0000200000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e80d, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000680d, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e40d, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=2 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000640d, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=2 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e90d, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000690d, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e60d, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=2 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000660d, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=2 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e20d, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=2 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000620d, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=2 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f00d, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000700d, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f40d, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000740d, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f10d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000710d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f60d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000760d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa0d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a0d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ff0d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007f0d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=3 j=4
    if ((0 != (_white & 0x0000400000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e90e, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000690e, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e50e, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=4 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000650e, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=4 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e00e, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=4 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000600e, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=4 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea0e, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a0e, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e70e, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=4 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000670e, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=4 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e30e, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=4 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000630e, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=4 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f10e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000710e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f50e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000750e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f80e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000780e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fc0e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007c0e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f20e, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000720e, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f70e, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000770e, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fb0e, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=4 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007b0e, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=4 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=3 j=6
    if ((0 != (_white & 0x0000800000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea0f, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a0f, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e60f, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=6 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000660f, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=6 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e10f, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=6 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000610f, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=6 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000eb0f, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006b0f, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f20f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000720f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f60f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000760f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f90f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000790f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fd0f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007d0f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f30f, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000730f, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=4 j=1
    if ((0 != (_white & 0x0001000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ec10, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006c10, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed10, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d10, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e910, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006910, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e610, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006610, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e210, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006210, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f410, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007410, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f510, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007510, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f910, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=1 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007910, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=1 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fe10, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=1 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007e10, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=1 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=4 j=3
    if ((0 != (_white & 0x0002000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed11, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d11, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e811, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006811, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e411, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=3 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006411, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=3 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee11, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e11, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea11, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a11, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e711, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006711, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e311, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006311, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f511, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007511, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f811, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=3 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007811, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=3 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fc11, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=3 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007c11, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=3 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f611, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007611, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa11, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=3 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a11, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=3 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ff11, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=3 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007f11, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=3 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=4 j=5
    if ((0 != (_white & 0x0004000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee12, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e12, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e912, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006912, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e512, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006512, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e012, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006012, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef12, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f12, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000eb12, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006b12, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f612, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007612, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f912, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=5 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007912, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=5 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fd12, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=5 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007d12, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=5 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f712, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007712, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fb12, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=5 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007b12, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=5 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=4 j=7
    if ((0 != (_white & 0x0008000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef13, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f13, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea13, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a13, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e613, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006613, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e113, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006113, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f713, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007713, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa13, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=7 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a13, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=7 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fe13, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=7 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007e13, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=7 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=5 j=0
    if ((0 != (_white & 0x0010000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f014, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007014, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed14, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d14, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e914, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006914, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e614, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006614, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e214, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006214, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f814, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007814, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fd14, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=0 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007d14, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=0 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);
    }

    // White King i=5 j=2
    if ((0 != (_white & 0x0020000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f015, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007015, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ec15, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006c15, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f115, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007115, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee15, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e15, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea15, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a15, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e715, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006715, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e315, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006315, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f815, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007815, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fc15, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=2 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007c15, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=2 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f915, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007915, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fe15, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=2 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007e15, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=2 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=5 j=4
    if ((0 != (_white & 0x0040000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f116, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007116, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed16, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d16, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e816, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006816, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e416, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006416, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f216, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007216, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef16, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f16, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000eb16, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=4 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006b16, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=4 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f916, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007916, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fd16, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=4 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007d16, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=4 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa16, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a16, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ff16, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=4 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007f16, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=4 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=5 j=6
    if ((0 != (_white & 0x0080000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f217, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007217, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee17, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e17, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e917, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006917, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e517, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006517, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e017, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006017, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f317, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007317, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa17, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a17, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fe17, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=6 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007e17, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=6 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fb17, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007b17, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=6 j=1
    if ((0 != (_white & 0x0100000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f418, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007418, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f518, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007518, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f118, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007118, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee18, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e18, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea18, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a18, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e718, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006718, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e318, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006318, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fc18, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=1 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007c18, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=1 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fd18, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=6 sj=1 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007d18, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=6 sj=1 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);
    }

    // White King i=6 j=3
    if ((0 != (_white & 0x0200000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f519, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007519, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f019, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007019, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ec19, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006c19, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f619, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007619, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f219, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007219, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef19, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f19, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000eb19, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006b19, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fd19, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=3 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007d19, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=3 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fe19, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=6 sj=3 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007e19, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=6 sj=3 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=6 j=5
    if ((0 != (_white & 0x0400000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f61a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000761a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f11a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000711a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed1a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d1a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e81a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000681a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e41a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000641a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f71a, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000771a, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f31a, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000731a, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fe1a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=5 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007e1a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=5 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ff1a, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=6 sj=5 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007f1a, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=6 sj=5 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=6 j=7
    if ((0 != (_white & 0x0800000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f71b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000771b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f21b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000721b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee1b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e1b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e91b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000691b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e51b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000651b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e01b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000601b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ff1b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=7 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007f1b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=7 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=0
    if ((0 != (_white & 0x1000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f81c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000781c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f51c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000751c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f11c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000711c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ee1c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006e1c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ea1c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006a1c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e71c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000671c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e31c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000631c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=2
    if ((0 != (_white & 0x2000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f81d, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000781d, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f41d, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000741d, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f91d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000791d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f61d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000761d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f21d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000721d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ef1d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006f1d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000eb1d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006b1d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=4
    if ((0 != (_white & 0x4000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f91e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000791e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f51e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000751e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f01e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000701e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ec1e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006c1e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa1e, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a1e, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f71e, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000771e, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f31e, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000731e, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=6
    if ((0 != (_white & 0x8000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fa1f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007a1f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f61f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000761f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000f11f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000711f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ed1f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00006d1f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e81f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000681f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000e41f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000641f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000fb1f, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00007b1f, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

}
else
{
    // Black Man i=0 j=1
    if ((0 != (_black & 0x0000000000000001)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
        {
            moves.push_back(Move(0x00000400, 0));
            LOG_DEBUG("Move DOWN LEFT si=0 sj=1 ei=1 ej=0" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
        {
            moves.push_back(Move(0x00000500, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_white & 0x0000002000000020)))
        {
            moves.push_back(Move(0x00008900, 5));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=1 ei=2 ej=3 ci=1 cj=2" << " Move = " << moves.back());
        }

    }
    // Black Man i=0 j=3
    if ((0 != (_black & 0x0000000000000002)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
        {
            moves.push_back(Move(0x00000501, 0));
            LOG_DEBUG("Move DOWN LEFT si=0 sj=3 ei=1 ej=2" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
        {
            moves.push_back(Move(0x00000601, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))) and (0 != (_white & 0x0000002000000020)))
        {
            moves.push_back(Move(0x00008801, 5));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=3 ei=2 ej=1 ci=1 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_white & 0x0000004000000040)))
        {
            moves.push_back(Move(0x00008a01, 6));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=3 ei=2 ej=5 ci=1 cj=4" << " Move = " << moves.back());
        }

    }
    // Black Man i=0 j=5
    if ((0 != (_black & 0x0000000000000004)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
        {
            moves.push_back(Move(0x00000602, 0));
            LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=1 ej=4" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
        {
            moves.push_back(Move(0x00000702, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_white & 0x0000004000000040)))
        {
            moves.push_back(Move(0x00008902, 6));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=5 ei=2 ej=3 ci=1 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))) and (0 != (_white & 0x0000008000000080)))
        {
            moves.push_back(Move(0x00008b02, 7));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=5 ei=2 ej=7 ci=1 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=0 j=7
    if ((0 != (_black & 0x0000000000000008)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
        {
            moves.push_back(Move(0x00000703, 0));
            LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=1 ej=6" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_white & 0x0000008000000080)))
        {
            moves.push_back(Move(0x00008a03, 7));
            LOG_DEBUG("Capture  UP  RIGHT si=0 sj=7 ei=2 ej=5 ci=1 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=1 j=0
    if ((0 != (_black & 0x0000000000000010)))
    {

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
        {
            moves.push_back(Move(0x00000804, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_white & 0x0000010000000100)))
        {
            moves.push_back(Move(0x00008d04, 8));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=0 ei=3 ej=2 ci=2 cj=1" << " Move = " << moves.back());
        }

    }
    // Black Man i=1 j=2
    if ((0 != (_black & 0x0000000000000020)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
        {
            moves.push_back(Move(0x00000805, 0));
            LOG_DEBUG("Move DOWN LEFT si=1 sj=2 ei=2 ej=1" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
        {
            moves.push_back(Move(0x00000905, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))) and (0 != (_white & 0x0000010000000100)))
        {
            moves.push_back(Move(0x00008c05, 8));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=2 ei=3 ej=0 ci=2 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_white & 0x0000020000000200)))
        {
            moves.push_back(Move(0x00008e05, 9));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=2 ei=3 ej=4 ci=2 cj=3" << " Move = " << moves.back());
        }

    }
    // Black Man i=1 j=4
    if ((0 != (_black & 0x0000000000000040)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
        {
            moves.push_back(Move(0x00000906, 0));
            LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=2 ej=3" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
        {
            moves.push_back(Move(0x00000a06, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_white & 0x0000020000000200)))
        {
            moves.push_back(Move(0x00008d06, 9));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=4 ei=3 ej=2 ci=2 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))) and (0 != (_white & 0x0000040000000400)))
        {
            moves.push_back(Move(0x00008f06, 10));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=4 ei=3 ej=6 ci=2 cj=5" << " Move = " << moves.back());
        }

    }
    // Black Man i=1 j=6
    if ((0 != (_black & 0x0000000000000080)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
        {
            moves.push_back(Move(0x00000a07, 0));
            LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=2 ej=5" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
        {
            moves.push_back(Move(0x00000b07, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture DOWN LEFT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_white & 0x0000040000000400)))
        {
            moves.push_back(Move(0x00008e07, 10));
            LOG_DEBUG("Capture  UP  RIGHT si=1 sj=6 ei=3 ej=4 ci=2 cj=5" << " Move = " << moves.back());
        }

    }
    // Black Man i=2 j=1
    if ((0 != (_black & 0x0000000000000100)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
        {
            moves.push_back(Move(0x00000c08, 0));
            LOG_DEBUG("Move DOWN LEFT si=2 sj=1 ei=3 ej=0" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
        {
            moves.push_back(Move(0x00000d08, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))) and (0 != (_white & 0x0000002000000020)))
        {
            moves.push_back(Move(0x00008108, 5));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=1 ei=0 ej=3 ci=1 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_white & 0x0000200000002000)))
        {
            moves.push_back(Move(0x00009108, 13));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=1 ei=4 ej=3 ci=3 cj=2" << " Move = " << moves.back());
        }

    }
    // Black Man i=2 j=3
    if ((0 != (_black & 0x0000000000000200)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
        {
            moves.push_back(Move(0x00000d09, 0));
            LOG_DEBUG("Move DOWN LEFT si=2 sj=3 ei=3 ej=2" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
        {
            moves.push_back(Move(0x00000e09, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))) and (0 != (_white & 0x0000002000000020)))
        {
            moves.push_back(Move(0x00008009, 5));
            LOG_DEBUG("Capture  UP  LEFT si=2 sj=3 ei=0 ej=1 ci=1 cj=2" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))) and (0 != (_white & 0x0000004000000040)))
        {
            moves.push_back(Move(0x00008209, 6));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=3 ei=0 ej=5 ci=1 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))) and (0 != (_white & 0x0000200000002000)))
        {
            moves.push_back(Move(0x00009009, 13));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=3 ei=4 ej=1 ci=3 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_white & 0x0000400000004000)))
        {
            moves.push_back(Move(0x00009209, 14));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=3 ei=4 ej=5 ci=3 cj=4" << " Move = " << moves.back());
        }

    }
    // Black Man i=2 j=5
    if ((0 != (_black & 0x0000000000000400)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
        {
            moves.push_back(Move(0x00000e0a, 0));
            LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=3 ej=4" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
        {
            moves.push_back(Move(0x00000f0a, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))) and (0 != (_white & 0x0000004000000040)))
        {
            moves.push_back(Move(0x0000810a, 6));
            LOG_DEBUG("Capture  UP  LEFT si=2 sj=5 ei=0 ej=3 ci=1 cj=4" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))) and (0 != (_white & 0x0000008000000080)))
        {
            moves.push_back(Move(0x0000830a, 7));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=5 ei=0 ej=7 ci=1 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_white & 0x0000400000004000)))
        {
            moves.push_back(Move(0x0000910a, 14));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=5 ei=4 ej=3 ci=3 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))) and (0 != (_white & 0x0000800000008000)))
        {
            moves.push_back(Move(0x0000930a, 15));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=5 ei=4 ej=7 ci=3 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=2 j=7
    if ((0 != (_black & 0x0000000000000800)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
        {
            moves.push_back(Move(0x00000f0b, 0));
            LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=3 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))) and (0 != (_white & 0x0000008000000080)))
        {
            moves.push_back(Move(0x0000820b, 7));
            LOG_DEBUG("Capture  UP  LEFT si=2 sj=7 ei=0 ej=5 ci=1 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_white & 0x0000800000008000)))
        {
            moves.push_back(Move(0x0000920b, 15));
            LOG_DEBUG("Capture  UP  RIGHT si=2 sj=7 ei=4 ej=5 ci=3 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=3 j=0
    if ((0 != (_black & 0x0000000000001000)))
    {

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
        {
            moves.push_back(Move(0x0000100c, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))) and (0 != (_white & 0x0000010000000100)))
        {
            moves.push_back(Move(0x0000850c, 8));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=0 ei=1 ej=2 ci=2 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_white & 0x0001000000010000)))
        {
            moves.push_back(Move(0x0000950c, 16));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=0 ei=5 ej=2 ci=4 cj=1" << " Move = " << moves.back());
        }

    }
    // Black Man i=3 j=2
    if ((0 != (_black & 0x0000000000002000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
        {
            moves.push_back(Move(0x0000100d, 0));
            LOG_DEBUG("Move DOWN LEFT si=3 sj=2 ei=4 ej=1" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
        {
            moves.push_back(Move(0x0000110d, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))) and (0 != (_white & 0x0000010000000100)))
        {
            moves.push_back(Move(0x0000840d, 8));
            LOG_DEBUG("Capture  UP  LEFT si=3 sj=2 ei=1 ej=0 ci=2 cj=1" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))) and (0 != (_white & 0x0000020000000200)))
        {
            moves.push_back(Move(0x0000860d, 9));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=2 ei=1 ej=4 ci=2 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))) and (0 != (_white & 0x0001000000010000)))
        {
            moves.push_back(Move(0x0000940d, 16));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=2 ei=5 ej=0 ci=4 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_white & 0x0002000000020000)))
        {
            moves.push_back(Move(0x0000960d, 17));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=2 ei=5 ej=4 ci=4 cj=3" << " Move = " << moves.back());
        }

    }
    // Black Man i=3 j=4
    if ((0 != (_black & 0x0000000000004000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
        {
            moves.push_back(Move(0x0000110e, 0));
            LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=4 ej=3" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
        {
            moves.push_back(Move(0x0000120e, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))) and (0 != (_white & 0x0000020000000200)))
        {
            moves.push_back(Move(0x0000850e, 9));
            LOG_DEBUG("Capture  UP  LEFT si=3 sj=4 ei=1 ej=2 ci=2 cj=3" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))) and (0 != (_white & 0x0000040000000400)))
        {
            moves.push_back(Move(0x0000870e, 10));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=4 ei=1 ej=6 ci=2 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_white & 0x0002000000020000)))
        {
            moves.push_back(Move(0x0000950e, 17));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=4 ei=5 ej=2 ci=4 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))) and (0 != (_white & 0x0004000000040000)))
        {
            moves.push_back(Move(0x0000970e, 18));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=4 ei=5 ej=6 ci=4 cj=5" << " Move = " << moves.back());
        }

    }
    // Black Man i=3 j=6
    if ((0 != (_black & 0x0000000000008000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
        {
            moves.push_back(Move(0x0000120f, 0));
            LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=4 ej=5" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
        {
            moves.push_back(Move(0x0000130f, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))) and (0 != (_white & 0x0000040000000400)))
        {
            moves.push_back(Move(0x0000860f, 10));
            LOG_DEBUG("Capture  UP  LEFT si=3 sj=6 ei=1 ej=4 ci=2 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_white & 0x0004000000040000)))
        {
            moves.push_back(Move(0x0000960f, 18));
            LOG_DEBUG("Capture  UP  RIGHT si=3 sj=6 ei=5 ej=4 ci=4 cj=5" << " Move = " << moves.back());
        }

    }
    // Black Man i=4 j=1
    if ((0 != (_black & 0x0000000000010000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
        {
            moves.push_back(Move(0x00001410, 0));
            LOG_DEBUG("Move DOWN LEFT si=4 sj=1 ei=5 ej=0" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
        {
            moves.push_back(Move(0x00001510, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_white & 0x0000200000002000)))
        {
            moves.push_back(Move(0x00008910, 13));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=1 ei=2 ej=3 ci=3 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))) and (0 != (_white & 0x0020000000200000)))
        {
            moves.push_back(Move(0x00009910, 21));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=1 ei=6 ej=3 ci=5 cj=2" << " Move = " << moves.back());
        }

    }
    // Black Man i=4 j=3
    if ((0 != (_black & 0x0000000000020000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
        {
            moves.push_back(Move(0x00001511, 0));
            LOG_DEBUG("Move DOWN LEFT si=4 sj=3 ei=5 ej=2" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
        {
            moves.push_back(Move(0x00001611, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))) and (0 != (_white & 0x0000200000002000)))
        {
            moves.push_back(Move(0x00008811, 13));
            LOG_DEBUG("Capture  UP  LEFT si=4 sj=3 ei=2 ej=1 ci=3 cj=2" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_white & 0x0000400000004000)))
        {
            moves.push_back(Move(0x00008a11, 14));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=3 ei=2 ej=5 ci=3 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))) and (0 != (_white & 0x0020000000200000)))
        {
            moves.push_back(Move(0x00009811, 21));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=3 ei=6 ej=1 ci=5 cj=2" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))) and (0 != (_white & 0x0040000000400000)))
        {
            moves.push_back(Move(0x00009a11, 22));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=3 ei=6 ej=5 ci=5 cj=4" << " Move = " << moves.back());
        }

    }
    // Black Man i=4 j=5
    if ((0 != (_black & 0x0000000000040000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
        {
            moves.push_back(Move(0x00001612, 0));
            LOG_DEBUG("Move DOWN LEFT si=4 sj=5 ei=5 ej=4" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
        {
            moves.push_back(Move(0x00001712, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))) and (0 != (_white & 0x0000400000004000)))
        {
            moves.push_back(Move(0x00008912, 14));
            LOG_DEBUG("Capture  UP  LEFT si=4 sj=5 ei=2 ej=3 ci=3 cj=4" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))) and (0 != (_white & 0x0000800000008000)))
        {
            moves.push_back(Move(0x00008b12, 15));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=5 ei=2 ej=7 ci=3 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))) and (0 != (_white & 0x0040000000400000)))
        {
            moves.push_back(Move(0x00009912, 22));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=5 ei=6 ej=3 ci=5 cj=4" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))) and (0 != (_white & 0x0080000000800000)))
        {
            moves.push_back(Move(0x00009b12, 23));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=5 ei=6 ej=7 ci=5 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=4 j=7
    if ((0 != (_black & 0x0000000000080000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
        {
            moves.push_back(Move(0x00001713, 0));
            LOG_DEBUG("Move DOWN LEFT si=4 sj=7 ei=5 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))) and (0 != (_white & 0x0000800000008000)))
        {
            moves.push_back(Move(0x00008a13, 15));
            LOG_DEBUG("Capture  UP  LEFT si=4 sj=7 ei=2 ej=5 ci=3 cj=6" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))) and (0 != (_white & 0x0080000000800000)))
        {
            moves.push_back(Move(0x00009a13, 23));
            LOG_DEBUG("Capture  UP  RIGHT si=4 sj=7 ei=6 ej=5 ci=5 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=5 j=0
    if ((0 != (_black & 0x0000000000100000)))
    {

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
        {
            moves.push_back(Move(0x00001814, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_white & 0x0001000000010000)))
        {
            moves.push_back(Move(0x00008d14, 16));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=0 ei=3 ej=2 ci=4 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))) and (0 != (_white & 0x0100000001000000)))
        {
            moves.push_back(Move(0x00009d14, 24));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=0 ei=7 ej=2 ci=6 cj=1" << " Move = " << moves.back());
        }

    }
    // Black Man i=5 j=2
    if ((0 != (_black & 0x0000000000200000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
        {
            moves.push_back(Move(0x00001815, 0));
            LOG_DEBUG("Move DOWN LEFT si=5 sj=2 ei=6 ej=1" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
        {
            moves.push_back(Move(0x00001915, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))) and (0 != (_white & 0x0001000000010000)))
        {
            moves.push_back(Move(0x00008c15, 16));
            LOG_DEBUG("Capture  UP  LEFT si=5 sj=2 ei=3 ej=0 ci=4 cj=1" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_white & 0x0002000000020000)))
        {
            moves.push_back(Move(0x00008e15, 17));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=2 ei=3 ej=4 ci=4 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))) and (0 != (_white & 0x0100000001000000)))
        {
            moves.push_back(Move(0x00009c15, 24));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=2 ei=7 ej=0 ci=6 cj=1" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))) and (0 != (_white & 0x0200000002000000)))
        {
            moves.push_back(Move(0x00009e15, 25));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=2 ei=7 ej=4 ci=6 cj=3" << " Move = " << moves.back());
        }

    }
    // Black Man i=5 j=4
    if ((0 != (_black & 0x0000000000400000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
        {
            moves.push_back(Move(0x00001916, 0));
            LOG_DEBUG("Move DOWN LEFT si=5 sj=4 ei=6 ej=3" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
        {
            moves.push_back(Move(0x00001a16, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))) and (0 != (_white & 0x0002000000020000)))
        {
            moves.push_back(Move(0x00008d16, 17));
            LOG_DEBUG("Capture  UP  LEFT si=5 sj=4 ei=3 ej=2 ci=4 cj=3" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))) and (0 != (_white & 0x0004000000040000)))
        {
            moves.push_back(Move(0x00008f16, 18));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=4 ei=3 ej=6 ci=4 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))) and (0 != (_white & 0x0200000002000000)))
        {
            moves.push_back(Move(0x00009d16, 25));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=4 ei=7 ej=2 ci=6 cj=3" << " Move = " << moves.back());
        }


        // Capture DOWN RIGHT
        if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))) and (0 != (_white & 0x0400000004000000)))
        {
            moves.push_back(Move(0x00009f16, 26));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=4 ei=7 ej=6 ci=6 cj=5" << " Move = " << moves.back());
        }

    }
    // Black Man i=5 j=6
    if ((0 != (_black & 0x0000000000800000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
        {
            moves.push_back(Move(0x00001a17, 0));
            LOG_DEBUG("Move DOWN LEFT si=5 sj=6 ei=6 ej=5" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
        {
            moves.push_back(Move(0x00001b17, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))) and (0 != (_white & 0x0004000000040000)))
        {
            moves.push_back(Move(0x00008e17, 18));
            LOG_DEBUG("Capture  UP  LEFT si=5 sj=6 ei=3 ej=4 ci=4 cj=5" << " Move = " << moves.back());
        }


        // Capture DOWN LEFT
        if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))) and (0 != (_white & 0x0400000004000000)))
        {
            moves.push_back(Move(0x00009e17, 26));
            LOG_DEBUG("Capture  UP  RIGHT si=5 sj=6 ei=7 ej=4 ci=6 cj=5" << " Move = " << moves.back());
        }

    }
    // Black Man i=6 j=1
    if ((0 != (_black & 0x0000000001000000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
        {
            moves.push_back(Move(0x00001c18, 0));
            LOG_DEBUG("Move DOWN LEFT si=6 sj=1 ei=7 ej=0" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
        {
            moves.push_back(Move(0x00001d18, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_white & 0x0020000000200000)))
        {
            moves.push_back(Move(0x00009118, 21));
            LOG_DEBUG("Capture  UP  RIGHT si=6 sj=1 ei=4 ej=3 ci=5 cj=2" << " Move = " << moves.back());
        }

    }
    // Black Man i=6 j=3
    if ((0 != (_black & 0x0000000002000000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
        {
            moves.push_back(Move(0x00001d19, 0));
            LOG_DEBUG("Move DOWN LEFT si=6 sj=3 ei=7 ej=2" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
        {
            moves.push_back(Move(0x00001e19, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))) and (0 != (_white & 0x0020000000200000)))
        {
            moves.push_back(Move(0x00009019, 21));
            LOG_DEBUG("Capture  UP  LEFT si=6 sj=3 ei=4 ej=1 ci=5 cj=2" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_white & 0x0040000000400000)))
        {
            moves.push_back(Move(0x00009219, 22));
            LOG_DEBUG("Capture  UP  RIGHT si=6 sj=3 ei=4 ej=5 ci=5 cj=4" << " Move = " << moves.back());
        }

    }
    // Black Man i=6 j=5
    if ((0 != (_black & 0x0000000004000000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
        {
            moves.push_back(Move(0x00001e1a, 0));
            LOG_DEBUG("Move DOWN LEFT si=6 sj=5 ei=7 ej=4" << " Move = " << moves.back());
        }

        // Move DOWN RIGHT
        if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
        {
            moves.push_back(Move(0x00001f1a, 0));
            LOG_DEBUG("Move DOWN RIGHT si={si} sj={sj} ei={ei} ej={ej}" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))) and (0 != (_white & 0x0040000000400000)))
        {
            moves.push_back(Move(0x0000911a, 22));
            LOG_DEBUG("Capture  UP  LEFT si=6 sj=5 ei=4 ej=3 ci=5 cj=4" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))) and (0 != (_white & 0x0080000000800000)))
        {
            moves.push_back(Move(0x0000931a, 23));
            LOG_DEBUG("Capture  UP  RIGHT si=6 sj=5 ei=4 ej=7 ci=5 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=6 j=7
    if ((0 != (_black & 0x0000000008000000)))
    {

        // Move DOWN LEFT
        if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
        {
            moves.push_back(Move(0x00001f1b, 0));
            LOG_DEBUG("Move DOWN LEFT si=6 sj=7 ei=7 ej=6" << " Move = " << moves.back());
        }

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))) and (0 != (_white & 0x0080000000800000)))
        {
            moves.push_back(Move(0x0000921b, 23));
            LOG_DEBUG("Capture  UP  LEFT si=6 sj=7 ei=4 ej=5 ci=5 cj=6" << " Move = " << moves.back());
        }

    }
    // Black Man i=7 j=0
    if ((0 != (_black & 0x0000000010000000)))
    {

        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_white & 0x0100000001000000)))
        {
            moves.push_back(Move(0x0000951c, 24));
            LOG_DEBUG("Capture  UP  RIGHT si=7 sj=0 ei=5 ej=2 ci=6 cj=1" << " Move = " << moves.back());
        }

    }
    // Black Man i=7 j=2
    if ((0 != (_black & 0x0000000020000000)))
    {

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))) and (0 != (_white & 0x0100000001000000)))
        {
            moves.push_back(Move(0x0000941d, 24));
            LOG_DEBUG("Capture  UP  LEFT si=7 sj=2 ei=5 ej=0 ci=6 cj=1" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_white & 0x0200000002000000)))
        {
            moves.push_back(Move(0x0000961d, 25));
            LOG_DEBUG("Capture  UP  RIGHT si=7 sj=2 ei=5 ej=4 ci=6 cj=3" << " Move = " << moves.back());
        }

    }
    // Black Man i=7 j=4
    if ((0 != (_black & 0x0000000040000000)))
    {

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))) and (0 != (_white & 0x0200000002000000)))
        {
            moves.push_back(Move(0x0000951e, 25));
            LOG_DEBUG("Capture  UP  LEFT si=7 sj=4 ei=5 ej=2 ci=6 cj=3" << " Move = " << moves.back());
        }


        // Capture  UP  RIGHT
        if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))) and (0 != (_white & 0x0400000004000000)))
        {
            moves.push_back(Move(0x0000971e, 26));
            LOG_DEBUG("Capture  UP  RIGHT si=7 sj=4 ei=5 ej=6 ci=6 cj=5" << " Move = " << moves.back());
        }

    }
    // Black Man i=7 j=6
    if ((0 != (_black & 0x0000000080000000)))
    {

        // Capture  UP  LEFT
        if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))) and (0 != (_white & 0x0400000004000000)))
        {
            moves.push_back(Move(0x0000961f, 26));
            LOG_DEBUG("Capture  UP  LEFT si=7 sj=6 ei=5 ej=4 ci=6 cj=5" << " Move = " << moves.back());
        }

    }

    // White King i=0 j=1
    if ((0 != (_black & 0x0000000100000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a400, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002400, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a500, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002500, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a900, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002900, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae00, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e00, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b200, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003200, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b700, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003700, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bb00, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=1 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003b00, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=1 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=0 j=3
    if ((0 != (_black & 0x0000000200000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a501, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002501, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a801, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002801, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ac01, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002c01, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a601, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002601, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa01, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a01, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af01, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f01, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b301, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=3 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003301, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=3 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=0 j=5
    if ((0 != (_black & 0x0000000400000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a602, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002602, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a902, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002902, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad02, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d02, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b002, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003002, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b402, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=5 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003402, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=5 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a702, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002702, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ab02, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=0 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002b02, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=0 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);
    }

    // White King i=0 j=7
    if ((0 != (_black & 0x0000000800000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a703, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002703, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa03, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a03, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae03, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e03, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b103, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003103, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b503, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003503, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b803, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003803, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bc03, c));
                    LOG_DEBUG("Capture DOWN LEFT si=0 sj=7 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003c03, 0));
                    LOG_DEBUG("Move DOWN LEFT si=0 sj=7 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=1 j=0
    if ((0 != (_black & 0x0000001000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a004, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=0 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002004, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=0 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a804, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002804, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad04, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d04, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b104, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003104, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b604, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003604, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba04, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a04, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bf04, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=0 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003f04, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=0 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=1 j=2
    if ((0 != (_black & 0x0000002000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a005, c));
                    LOG_DEBUG("Capture UP LEFT si=1 sj=2 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002005, 0));
                    LOG_DEBUG("Move UP LEFT si=1 sj=2 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a105, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=2 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002105, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=2 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a805, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002805, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ac05, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002c05, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a905, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002905, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae05, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e05, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b205, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003205, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b705, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003705, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bb05, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=2 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003b05, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=2 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=1 j=4
    if ((0 != (_black & 0x0000004000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a106, c));
                    LOG_DEBUG("Capture UP LEFT si=1 sj=4 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002106, 0));
                    LOG_DEBUG("Move UP LEFT si=1 sj=4 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a206, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=4 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002206, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=4 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a906, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002906, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad06, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d06, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b006, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003006, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b406, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=4 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003406, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=4 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa06, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a06, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af06, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f06, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b306, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003306, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=1 j=6
    if ((0 != (_black & 0x0000008000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a207, c));
                    LOG_DEBUG("Capture UP LEFT si=1 sj=6 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002207, 0));
                    LOG_DEBUG("Move UP LEFT si=1 sj=6 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a307, c));
                    LOG_DEBUG("Capture UP RIGHT si=1 sj=6 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002307, 0));
                    LOG_DEBUG("Move UP RIGHT si=1 sj=6 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa07, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a07, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae07, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e07, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b107, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003107, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b507, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003507, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b807, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003807, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bc07, c));
                    LOG_DEBUG("Capture DOWN LEFT si=1 sj=6 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003c07, 0));
                    LOG_DEBUG("Move DOWN LEFT si=1 sj=6 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ab07, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=1 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002b07, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=1 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);
    }

    // White King i=2 j=1
    if ((0 != (_black & 0x0000010000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a408, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002408, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=1 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a508, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002508, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=1 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a108, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=1 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002108, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=1 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ac08, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002c08, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad08, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d08, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b108, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003108, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b608, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003608, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba08, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a08, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bf08, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=1 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003f08, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=1 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=2 j=3
    if ((0 != (_black & 0x0000020000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a509, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002509, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=3 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a009, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=3 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002009, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=3 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a609, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002609, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=3 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a209, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=3 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002209, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=3 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad09, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d09, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b009, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003009, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b409, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=3 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003409, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=3 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae09, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e09, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b209, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003209, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b709, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003709, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bb09, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=3 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003b09, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=3 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=2 j=5
    if ((0 != (_black & 0x0000040000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a60a, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000260a, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=5 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a10a, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=5 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000210a, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=5 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a70a, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000270a, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=5 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a30a, c));
                    LOG_DEBUG("Capture UP RIGHT si=2 sj=5 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000230a, 0));
                    LOG_DEBUG("Move UP RIGHT si=2 sj=5 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae0a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e0a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b10a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000310a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b50a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000350a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b80a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000380a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bc0a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=5 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003c0a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=5 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af0a, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f0a, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b30a, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=2 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000330a, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=2 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=2 j=7
    if ((0 != (_black & 0x0000080000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a70b, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000270b, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=7 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a20b, c));
                    LOG_DEBUG("Capture UP LEFT si=2 sj=7 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000220b, 0));
                    LOG_DEBUG("Move UP LEFT si=2 sj=7 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af0b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f0b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b20b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000320b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b60b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000360b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b90b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000390b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bd0b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=2 sj=7 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003d0b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=2 sj=7 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=3 j=0
    if ((0 != (_black & 0x0000100000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a80c, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000280c, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=0 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a50c, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=0 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000250c, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=0 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a10c, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=0 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000210c, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=0 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b00c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000300c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b50c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000350c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b90c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000390c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000be0c, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=0 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003e0c, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=0 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=3 j=2
    if ((0 != (_black & 0x0000200000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a80d, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000280d, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=2 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a40d, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=2 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000240d, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=2 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a90d, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000290d, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=2 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a60d, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=2 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000260d, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=2 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a20d, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=2 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000220d, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=2 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b00d, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000300d, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b40d, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000340d, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b10d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000310d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b60d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000360d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba0d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a0d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bf0d, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=2 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003f0d, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=2 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=3 j=4
    if ((0 != (_black & 0x0000400000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a90e, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000290e, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=4 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a50e, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=4 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000250e, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=4 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a00e, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=4 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000200e, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=4 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa0e, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a0e, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=4 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a70e, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=4 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000270e, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=4 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a30e, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=4 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000230e, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=4 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b10e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000310e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b50e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000350e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b80e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000380e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bc0e, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=4 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003c0e, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=4 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b20e, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000320e, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b70e, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000370e, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bb0e, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=4 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003b0e, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=4 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=3 j=6
    if ((0 != (_black & 0x0000800000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa0f, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a0f, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=6 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a60f, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=6 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000260f, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=6 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a10f, c));
                    LOG_DEBUG("Capture UP LEFT si=3 sj=6 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000210f, 0));
                    LOG_DEBUG("Move UP LEFT si=3 sj=6 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ab0f, c));
                    LOG_DEBUG("Capture UP RIGHT si=3 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002b0f, 0));
                    LOG_DEBUG("Move UP RIGHT si=3 sj=6 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b20f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000320f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b60f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000360f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b90f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000390f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bd0f, c));
                    LOG_DEBUG("Capture DOWN LEFT si=3 sj=6 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003d0f, 0));
                    LOG_DEBUG("Move DOWN LEFT si=3 sj=6 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b30f, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=3 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000330f, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=3 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);
    }

    // White King i=4 j=1
    if ((0 != (_black & 0x0001000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ac10, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002c10, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=1 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad10, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d10, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a910, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002910, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a610, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002610, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a210, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=1 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002210, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=1 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b410, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003410, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b510, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003510, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b910, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=1 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003910, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=1 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000be10, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=1 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003e10, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=1 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=4 j=3
    if ((0 != (_black & 0x0002000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad11, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d11, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=3 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a811, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002811, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=3 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a411, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=3 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002411, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=3 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae11, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e11, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa11, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a11, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a711, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002711, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a311, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=3 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002311, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=3 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b511, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003511, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b811, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=3 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003811, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=3 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bc11, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=3 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003c11, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=3 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b611, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003611, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba11, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=3 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a11, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=3 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bf11, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=3 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003f11, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=3 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=4 j=5
    if ((0 != (_black & 0x0004000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae12, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e12, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a912, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002912, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a512, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002512, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a012, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=5 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002012, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=5 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af12, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f12, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=5 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ab12, c));
                    LOG_DEBUG("Capture UP RIGHT si=4 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002b12, 0));
                    LOG_DEBUG("Move UP RIGHT si=4 sj=5 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b612, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003612, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b912, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=5 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003912, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=5 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bd12, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=5 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003d12, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=5 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b712, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003712, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bb12, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=4 sj=5 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003b12, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=4 sj=5 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=4 j=7
    if ((0 != (_black & 0x0008000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af13, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f13, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa13, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a13, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a613, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002613, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=3
            if (((0 == (_white & 0x0000000200000002)) and (0 == (_black & 0x0000000200000002))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a113, c));
                    LOG_DEBUG("Capture UP LEFT si=4 sj=7 ei=0 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002113, 0));
                    LOG_DEBUG("Move UP LEFT si=4 sj=7 ei=0 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000200000002)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000200000002)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=1;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b713, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003713, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba13, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=7 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a13, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=7 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000be13, c));
                    LOG_DEBUG("Capture DOWN LEFT si=4 sj=7 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003e13, 0));
                    LOG_DEBUG("Move DOWN LEFT si=4 sj=7 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=5 j=0
    if ((0 != (_black & 0x0010000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b014, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003014, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad14, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d14, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a914, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002914, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=4
            if (((0 == (_white & 0x0000004000000040)) and (0 == (_black & 0x0000004000000040))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a614, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=1 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002614, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=1 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000004000000040)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000004000000040)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=6;
            }

            // to i=0 j=5
            if (((0 == (_white & 0x0000000400000004)) and (0 == (_black & 0x0000000400000004))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a214, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=0 ei=0 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002214, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=0 ei=0 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000400000004)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000400000004)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=2;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b814, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003814, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bd14, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=0 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003d14, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=0 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);
    }

    // White King i=5 j=2
    if ((0 != (_black & 0x0020000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b015, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003015, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=2 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ac15, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002c15, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=2 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b115, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003115, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae15, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e15, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa15, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a15, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a715, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002715, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a315, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=2 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002315, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=2 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b815, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003815, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bc15, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=2 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003c15, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=2 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b915, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003915, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000be15, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=2 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003e15, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=2 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=5 j=4
    if ((0 != (_black & 0x0040000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b116, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003116, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad16, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d16, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a816, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002816, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a416, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=4 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002416, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=4 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b216, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003216, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=4 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af16, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f16, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=4 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ab16, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=4 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002b16, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=4 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b916, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003916, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bd16, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=4 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003d16, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=4 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba16, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a16, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bf16, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=4 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003f16, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=4 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=5 j=6
    if ((0 != (_black & 0x0080000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b217, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003217, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae17, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e17, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a917, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002917, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a517, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002517, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a017, c));
                    LOG_DEBUG("Capture UP LEFT si=5 sj=6 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002017, 0));
                    LOG_DEBUG("Move UP LEFT si=5 sj=6 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b317, c));
                    LOG_DEBUG("Capture UP RIGHT si=5 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003317, 0));
                    LOG_DEBUG("Move UP RIGHT si=5 sj=6 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba17, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a17, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000be17, c));
                    LOG_DEBUG("Capture DOWN LEFT si=5 sj=6 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003e17, 0));
                    LOG_DEBUG("Move DOWN LEFT si=5 sj=6 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bb17, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=5 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003b17, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=5 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);
    }

    // White King i=6 j=1
    if ((0 != (_black & 0x0100000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b418, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003418, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=1 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b518, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003518, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b118, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003118, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae18, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e18, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa18, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a18, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a718, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002718, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a318, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=1 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002318, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=1 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=0
            if (((0 == (_white & 0x1000000010000000)) and (0 == (_black & 0x1000000010000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bc18, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=1 ei=7 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003c18, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=1 ei=7 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x1000000010000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x1000000010000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=28;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bd18, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=6 sj=1 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003d18, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=6 sj=1 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);
    }

    // White King i=6 j=3
    if ((0 != (_black & 0x0200000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b519, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003519, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=3 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b019, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003019, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=3 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ac19, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002c19, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=3 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b619, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003619, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b219, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003219, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af19, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f19, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ab19, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=3 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002b19, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=3 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=2
            if (((0 == (_white & 0x2000000020000000)) and (0 == (_black & 0x2000000020000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bd19, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=3 ei=7 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003d19, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=3 ei=7 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x2000000020000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x2000000020000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=29;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000be19, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=6 sj=3 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003e19, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=6 sj=3 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);
    }

    // White King i=6 j=5
    if ((0 != (_black & 0x0400000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b61a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000361a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b11a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000311a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad1a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d1a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a81a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000281a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a41a, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=5 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000241a, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=5 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b71a, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000371a, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=5 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b31a, c));
                    LOG_DEBUG("Capture UP RIGHT si=6 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000331a, 0));
                    LOG_DEBUG("Move UP RIGHT si=6 sj=5 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=4
            if (((0 == (_white & 0x4000000040000000)) and (0 == (_black & 0x4000000040000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000be1a, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=5 ei=7 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003e1a, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=5 ei=7 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x4000000040000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x4000000040000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=30;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bf1a, c));
                    LOG_DEBUG("Capture DOWN RIGHT si=6 sj=5 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003f1a, 0));
                    LOG_DEBUG("Move DOWN RIGHT si=6 sj=5 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);
    }

    // White King i=6 j=7
    if ((0 != (_black & 0x0800000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b71b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000371b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b21b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000321b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae1b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e1b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=3
            if (((0 == (_white & 0x0000020000000200)) and (0 == (_black & 0x0000020000000200))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a91b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=2 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000291b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=2 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000020000000200)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000020000000200)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=9;
            }

            // to i=1 j=2
            if (((0 == (_white & 0x0000002000000020)) and (0 == (_black & 0x0000002000000020))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a51b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=1 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000251b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=1 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000002000000020)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000002000000020)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=5;
            }

            // to i=0 j=1
            if (((0 == (_white & 0x0000000100000001)) and (0 == (_black & 0x0000000100000001))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a01b, c));
                    LOG_DEBUG("Capture UP LEFT si=6 sj=7 ei=0 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000201b, 0));
                    LOG_DEBUG("Move UP LEFT si=6 sj=7 ei=0 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000100000001)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000100000001)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=0;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=7 j=6
            if (((0 == (_white & 0x8000000080000000)) and (0 == (_black & 0x8000000080000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bf1b, c));
                    LOG_DEBUG("Capture DOWN LEFT si=6 sj=7 ei=7 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003f1b, 0));
                    LOG_DEBUG("Move DOWN LEFT si=6 sj=7 ei=7 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x8000000080000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x8000000080000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=31;
            }
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=0
    if ((0 != (_black & 0x1000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b81c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000381c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b51c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000351c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b11c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000311c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=4
            if (((0 == (_white & 0x0000400000004000)) and (0 == (_black & 0x0000400000004000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ae1c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=3 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002e1c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=3 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000400000004000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000400000004000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=14;
            }

            // to i=2 j=5
            if (((0 == (_white & 0x0000040000000400)) and (0 == (_black & 0x0000040000000400))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000aa1c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=2 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002a1c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=2 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000040000000400)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000040000000400)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=10;
            }

            // to i=1 j=6
            if (((0 == (_white & 0x0000008000000080)) and (0 == (_black & 0x0000008000000080))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a71c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=1 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000271c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=1 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000008000000080)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000008000000080)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=7;
            }

            // to i=0 j=7
            if (((0 == (_white & 0x0000000800000008)) and (0 == (_black & 0x0000000800000008))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a31c, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=0 ei=0 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000231c, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=0 ei=0 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000000800000008)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000000800000008)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=3;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=2
    if ((0 != (_black & 0x2000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=1
            if (((0 == (_white & 0x0100000001000000)) and (0 == (_black & 0x0100000001000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b81d, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000381d, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=2 ei=6 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0100000001000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0100000001000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=24;
            }

            // to i=5 j=0
            if (((0 == (_white & 0x0010000000100000)) and (0 == (_black & 0x0010000000100000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b41d, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000341d, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=2 ei=5 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0010000000100000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0010000000100000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=20;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b91d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000391d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b61d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000361d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=5
            if (((0 == (_white & 0x0004000000040000)) and (0 == (_black & 0x0004000000040000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b21d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000321d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=4 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0004000000040000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0004000000040000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=18;
            }

            // to i=3 j=6
            if (((0 == (_white & 0x0000800000008000)) and (0 == (_black & 0x0000800000008000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000af1d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=3 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002f1d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=3 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000800000008000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000800000008000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=15;
            }

            // to i=2 j=7
            if (((0 == (_white & 0x0000080000000800)) and (0 == (_black & 0x0000080000000800))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ab1d, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=2 ei=2 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002b1d, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=2 ei=2 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000080000000800)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000080000000800)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=11;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=4
    if ((0 != (_black & 0x4000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=3
            if (((0 == (_white & 0x0200000002000000)) and (0 == (_black & 0x0200000002000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b91e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000391e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=6 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0200000002000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0200000002000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=25;
            }

            // to i=5 j=2
            if (((0 == (_white & 0x0020000000200000)) and (0 == (_black & 0x0020000000200000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b51e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000351e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=5 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0020000000200000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0020000000200000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=21;
            }

            // to i=4 j=1
            if (((0 == (_white & 0x0001000000010000)) and (0 == (_black & 0x0001000000010000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b01e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000301e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=4 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0001000000010000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0001000000010000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=16;
            }

            // to i=3 j=0
            if (((0 == (_white & 0x0000100000001000)) and (0 == (_black & 0x0000100000001000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ac1e, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=4 ei=3 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002c1e, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=4 ei=3 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000100000001000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000100000001000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=12;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba1e, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a1e, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=4 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=5 j=6
            if (((0 == (_white & 0x0080000000800000)) and (0 == (_black & 0x0080000000800000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b71e, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000371e, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=4 ei=5 ej=6" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0080000000800000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0080000000800000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=23;
            }

            // to i=4 j=7
            if (((0 == (_white & 0x0008000000080000)) and (0 == (_black & 0x0008000000080000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b31e, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000331e, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=4 ei=4 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0008000000080000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0008000000080000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=19;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

    // White King i=7 j=6
    if ((0 != (_black & 0x8000000000000000)))
    {

        // UP LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=5
            if (((0 == (_white & 0x0400000004000000)) and (0 == (_black & 0x0400000004000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ba1f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003a1f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=6 ej=5" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0400000004000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0400000004000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=26;
            }

            // to i=5 j=4
            if (((0 == (_white & 0x0040000000400000)) and (0 == (_black & 0x0040000000400000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b61f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000361f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=5 ej=4" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0040000000400000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0040000000400000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=22;
            }

            // to i=4 j=3
            if (((0 == (_white & 0x0002000000020000)) and (0 == (_black & 0x0002000000020000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000b11f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000311f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=4 ej=3" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0002000000020000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0002000000020000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=17;
            }

            // to i=3 j=2
            if (((0 == (_white & 0x0000200000002000)) and (0 == (_black & 0x0000200000002000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000ad1f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=3 ej=2" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00002d1f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=3 ej=2" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000200000002000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000200000002000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=13;
            }

            // to i=2 j=1
            if (((0 == (_white & 0x0000010000000100)) and (0 == (_black & 0x0000010000000100))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a81f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=2 ej=1" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000281f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=2 ej=1" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000010000000100)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000010000000100)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=8;
            }

            // to i=1 j=0
            if (((0 == (_white & 0x0000001000000010)) and (0 == (_black & 0x0000001000000010))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000a41f, c));
                    LOG_DEBUG("Capture UP LEFT si=7 sj=6 ei=1 ej=0" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x0000241f, 0));
                    LOG_DEBUG("Move UP LEFT si=7 sj=6 ei=1 ej=0" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0000001000000010)))
            {
                break;
            }
            else if ((0 != (_white & 0x0000001000000010)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=4;
            }
        }
        while(false);

        // UP RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;

            // to i=6 j=7
            if (((0 == (_white & 0x0800000008000000)) and (0 == (_black & 0x0800000008000000))))
            {
                if (isCapture)
                {
                    moves.push_back(Move(0x0000bb1f, c));
                    LOG_DEBUG("Capture UP RIGHT si=7 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
                else
                {
                    moves.push_back(Move(0x00003b1f, 0));
                    LOG_DEBUG("Move UP RIGHT si=7 sj=6 ei=6 ej=7" << " Move = " << moves.back());
                }
            }
            else if ((0 != (_black & 0x0800000008000000)))
            {
                break;
            }
            else if ((0 != (_white & 0x0800000008000000)))
            {
                if (isCapture)
                {
                    break;
                }
                isCapture = true;
                c=27;
            }
        }
        while(false);

        // DOWN LEFT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);

        // DOWN RIGHT
        do
        {
            bool isCapture = false;
            uint8_t c = 0;
        }
        while(false);
    }

}

