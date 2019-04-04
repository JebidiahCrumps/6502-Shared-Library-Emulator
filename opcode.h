#ifndef opcode_h
#define opcode_h

     enum opCode{

        BRK = 0x00,
        ORA_x_ind = 0x01,
        ORA_zpg = 0x05,
        ASL_zpg = 0x06,
        PHP_impl = 0x08,
        ORA_n = 0X09,
        ASL_A = 0X0A,
        ORA_abs = 0X0D,
        ASL_abs = 0X0E,
        BPL_rel = 0x10;
        ORA_ind_y = 0x11;
        ORA_zpg_x = 0x15;
        ASL_zpg_x = 0x16;
        CLC_impl = 0x18;
        ORA_abs_y = 0x19;
        ORA_abs_x = 0x1D;
        ASL_abs_x = 0x1E;
        JSR_abs = 0x20;
        AND_x_ind = 0x21
        BIT_zpg = 0x24;
        NAD_zpg = 0x25;
        ROL_apg = 0x26;
        PLP_impl = 0x28;
        AND_# = 0x29;
        ROL_a = 0x2A;
        BIT_abs = 0x2C;
        AND_abs = 0x2D;
        ROL_abs = 0x2E;
        BMI_rel = 0x30;
        AND_ind_y = 0x31;
        AND_zpg_x = 0x35;
        ROL_zpg_x = 0x36;
        SEC_impl = 0x38;
        AND_abs_y = 0x39;
        AND_abs_x = 0x3D;
        ROL_abs_x = 0x3E;
        RTI_impl = 0x40;
        EOR_x_ind = 0x41;
        EOR_zpg = 0x45;
        LSR_zpg = 0x46;
        PHA_impl = 0x48;
        EOR_# = 0x49;
        LAS_a = 0x4A;
        JMP_abs = 0x4C;
        EOR_abs = 0x4D;
        LSR_abs = 0x4E;
        BVC_rel = 0x50;
        EOR_ind_y = 0x51;
        EOR_zpg_x = 0x55;
        LSR_zpg_x = 0x56;
        CLI_impl = 0x58;
        EOR_abs_y = 0x59;
        ERO_abs_x = 0x5D;
        LSR_abs = 0x5E;
        RTS_impl = 0x60;
        ADC_x_ind = 0x61;
        ADC_zpg = 0x65;
        ROR_zpg = 0x66;
        PLA_impl = 0x68;
        ADC_# = 0x69;
        ROR_a = 0x6A;
        JMP_ind = 0x6C;
        ADC_abs = 0x6D;
        ROR_abs = 0x6E;
        BVS_rel = 0x70;
        ADC_ind_y = 0x71;
        ADC_zpg_x = 0x75;
        ROR_zpg_x = 0x76;
        SEI_impl = 0x78;
        ADC_abs_y = 0x79;
        ADC_abs_x = 0x7D;
        ROR_abs_x = 0x7E;
        STA_x_ind = 0x81;
        STY_zpg = 0x84;
        STA_zpg = 0x85;
        STX_zpg = 0x86;
        DEY_impl = 0x88;
        TXA_impl = 0x8A;
        STY_abs = 0x8C;
        STA_abs = 0x0D;
        STX_abs = 0x8E;
        BCC_rel = 0x90;
        STA_ind_y = 0x91;
        STY_zpg_x = 0x94;
        STA_zpg_x = 0x95;
        STX_zpg_y = 0x96;
        TYA_impl = 0x98;
        STA_abs_y = 0x99;
        TXS_impl = 0x9A;
        STA_abs_x = 0x9D;
        LDY_# = 0xA0;
        LDA_x_ind = 0xA1;
        LDX_# = 0xA2;
        LDY_zpg = 0xA4;
        LDA_zpg = 0xA5;
        LDX_zpg = 0xA6;
        TAY_impl = 0xA8;
        LDA_# = 0xA9;
        TAX_impl = 0xAA;
        STA_abs_x = 0xAD;
        BCS_rel = 0xB0;
        LDA_ind_y = 0xB1;
        LDY_zpg_x = 0xB4;
        LDA_zpg_x = 0xB5;
        LDX_zpg_y = 0xB6;
        CLV_impl = 0xB8;
        LDA_abs_y = 0xB9:
        TSX_impl = 0xBA;
        LDY_abs_x = 0xBC;
        LDA_abs_x = 0xBD;
        LDA_abs_y = 0xBE;
        CPY_# = 0xC0;
        CMP_x_ind = 0xC1;
        CPY_zpg = 0xC4;
        CMP_zpg = 0xC5;
        DEC_zpg = 0xC6;
        INY_impl = 0xC8;
        CMP_# = 0xC9;
        DEX_impl = 0xCA;
        CPY_abs = 0xCC;
        CMP_abs = 0xCD;
        DEC_abs = 0xCE;
        BNE_rel = 0xD0;
        CMP_ind_y = 0xD1;
        CMP_zpg_x = 0xD5;
        DEC_zpg_x = 0xD6;
        CLD_impl = 0xD8;
        CMP_abs_y = 0xD9;
        CMP_abs_x = 0xDD;
        DEC_abs_x = 0xDE;
        CPX_# = 0xE0;
        SBC_x_ind = 0xE1;
        CPX_zpg = 0xE4;
        SBC_zpg = 0xE5;
        INC_zpg = 0xE6;
        INX_impl = 0xE8;
        SBC_# = 0xE9
        NOP_impl = 0xEA;
        CPX_abs = 0xEC;
        SBC_abs = 0xED;
        INC_abs = 0xEE;
        BEQ_rel = 0xF0;
        SBC_ind_y = 0xF1;
        SBC_zpg_x = 0xF5;
        INC_zpg_x = 0xF6;
        SED_impl = 0xF8;
        SBC_abs_y = 0xF9;
        SBC_abs_x = 0xFD;
        INC_abs_x = 0xFE;

        EXT = 0xFF,
    };


#endif