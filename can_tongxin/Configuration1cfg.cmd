/*   Do *not* directly modify this file.  It was    */
/*   generated by the Configuration Tool; any  */
/*   changes risk being overwritten.                */

/* INPUT Configuration1.cdb */

/* MODULE PARAMETERS */
-u _FXN_F_nop
GBL_USERLIMPMODEABORTFXN = _FXN_F_nop;
-u _FXN_F_nop
GBL_USERINITFXN = _FXN_F_nop;

-u MEM_NULL
MEM_SEGZERO = MEM_NULL;
-u MEM_NULL
MEM_MALLOCSEG = MEM_NULL;

-u CLK_F_getshtime
CLK_TIMEFXN = CLK_F_getshtime;
-u CLK_F_run
CLK_HOOKFXN = CLK_F_run;

-u KNL_tick_stub
PRD_THOOKFXN = KNL_tick_stub;

-u LSARAM
RTDX_DATAMEMSEG = LSARAM;

-u LSARAM
HST_DSMBUFSEG = LSARAM;

-u GBL_NULL
SWI_EHOOKFXN = GBL_NULL;
-u GBL_NULL
SWI_IHOOKFXN = GBL_NULL;
-u SWI_F_exec
SWI_EXECFXN = SWI_F_exec;
-u SWI_F_run
SWI_RUNFXN = SWI_F_run;

-u MEM_NULL
TSK_STACKSEG = MEM_NULL;
-u _FXN_F_nop
TSK_VCREATEFXN = _FXN_F_nop;
-u _FXN_F_nop
TSK_VDELETEFXN = _FXN_F_nop;
-u _FXN_F_nop
TSK_VEXITFXN = _FXN_F_nop;

-u IDL_F_stub
IDL_CALIBRFXN = IDL_F_stub;

-u _UTL_doAbort
SYS_ABORTFXN = _UTL_doAbort;
-u _UTL_doError
SYS_ERRORFXN = _UTL_doError;
-u _UTL_halt
SYS_EXITFXN = _UTL_halt;
-u _UTL_doPutc
SYS_PUTCFXN = _UTL_doPutc;

-u _FXN_F_nop
GIO_CREATEFXN = _FXN_F_nop;
-u _FXN_F_nop
GIO_DELETEFXN = _FXN_F_nop;
-u _FXN_F_nop
GIO_PENDFXN = _FXN_F_nop;
-u _FXN_F_nop
GIO_POSTFXN = _FXN_F_nop;

/* OBJECT ALIASES */
_PIEVECT = PIEVECT;
_SRAM = SRAM;
_MSARAM = MSARAM;
_LSARAM = LSARAM;
_OTP = OTP;
_FLASH = FLASH;
_H0SARAM = H0SARAM;
_BOOTROM = BOOTROM;
_BEGIN_FLASH = BEGIN_FLASH;
_PRD_clock = PRD_clock;
_RTA_fromHost = RTA_fromHost;
_RTA_toHost = RTA_toHost;
_HWI_RESET = HWI_RESET;
_HWI_INT1 = HWI_INT1;
_HWI_INT2 = HWI_INT2;
_HWI_INT3 = HWI_INT3;
_HWI_INT4 = HWI_INT4;
_HWI_INT5 = HWI_INT5;
_HWI_INT6 = HWI_INT6;
_HWI_INT7 = HWI_INT7;
_HWI_INT8 = HWI_INT8;
_HWI_INT9 = HWI_INT9;
_HWI_INT10 = HWI_INT10;
_HWI_INT11 = HWI_INT11;
_HWI_INT12 = HWI_INT12;
_HWI_INT13 = HWI_INT13;
_HWI_TINT = HWI_TINT;
_HWI_DLOG = HWI_DLOG;
_HWI_RTOS = HWI_RTOS;
_HWI_RESERVED = HWI_RESERVED;
_HWI_NMI = HWI_NMI;
_HWI_ILLEGAL = HWI_ILLEGAL;
_HWI_USER1 = HWI_USER1;
_HWI_USER2 = HWI_USER2;
_HWI_USER3 = HWI_USER3;
_HWI_USER4 = HWI_USER4;
_HWI_USER5 = HWI_USER5;
_HWI_USER6 = HWI_USER6;
_HWI_USER7 = HWI_USER7;
_HWI_USER8 = HWI_USER8;
_HWI_USER9 = HWI_USER9;
_HWI_USER10 = HWI_USER10;
_HWI_USER11 = HWI_USER11;
_HWI_USER12 = HWI_USER12;
_PIE_INT1_1 = PIE_INT1_1;
_PIE_INT1_2 = PIE_INT1_2;
_PIE_INT1_3 = PIE_INT1_3;
_PIE_INT1_4 = PIE_INT1_4;
_PIE_INT1_5 = PIE_INT1_5;
_PIE_INT1_6 = PIE_INT1_6;
_PIE_INT1_7 = PIE_INT1_7;
_PIE_INT1_8 = PIE_INT1_8;
_PIE_INT2_1 = PIE_INT2_1;
_PIE_INT2_2 = PIE_INT2_2;
_PIE_INT2_3 = PIE_INT2_3;
_PIE_INT2_4 = PIE_INT2_4;
_PIE_INT2_5 = PIE_INT2_5;
_PIE_INT2_6 = PIE_INT2_6;
_PIE_INT2_7 = PIE_INT2_7;
_PIE_INT2_8 = PIE_INT2_8;
_PIE_INT3_1 = PIE_INT3_1;
_PIE_INT3_2 = PIE_INT3_2;
_PIE_INT3_3 = PIE_INT3_3;
_PIE_INT3_4 = PIE_INT3_4;
_PIE_INT3_5 = PIE_INT3_5;
_PIE_INT3_6 = PIE_INT3_6;
_PIE_INT3_7 = PIE_INT3_7;
_PIE_INT3_8 = PIE_INT3_8;
_PIE_INT4_1 = PIE_INT4_1;
_PIE_INT4_2 = PIE_INT4_2;
_PIE_INT4_3 = PIE_INT4_3;
_PIE_INT4_4 = PIE_INT4_4;
_PIE_INT4_5 = PIE_INT4_5;
_PIE_INT4_6 = PIE_INT4_6;
_PIE_INT4_7 = PIE_INT4_7;
_PIE_INT4_8 = PIE_INT4_8;
_PIE_INT5_1 = PIE_INT5_1;
_PIE_INT5_2 = PIE_INT5_2;
_PIE_INT5_3 = PIE_INT5_3;
_PIE_INT5_4 = PIE_INT5_4;
_PIE_INT5_5 = PIE_INT5_5;
_PIE_INT5_6 = PIE_INT5_6;
_PIE_INT5_7 = PIE_INT5_7;
_PIE_INT5_8 = PIE_INT5_8;
_PIE_INT6_1 = PIE_INT6_1;
_PIE_INT6_2 = PIE_INT6_2;
_PIE_INT6_3 = PIE_INT6_3;
_PIE_INT6_4 = PIE_INT6_4;
_PIE_INT6_5 = PIE_INT6_5;
_PIE_INT6_6 = PIE_INT6_6;
_PIE_INT6_7 = PIE_INT6_7;
_PIE_INT6_8 = PIE_INT6_8;
_PIE_INT7_1 = PIE_INT7_1;
_PIE_INT7_2 = PIE_INT7_2;
_PIE_INT7_3 = PIE_INT7_3;
_PIE_INT7_4 = PIE_INT7_4;
_PIE_INT7_5 = PIE_INT7_5;
_PIE_INT7_6 = PIE_INT7_6;
_PIE_INT7_7 = PIE_INT7_7;
_PIE_INT7_8 = PIE_INT7_8;
_PIE_INT8_1 = PIE_INT8_1;
_PIE_INT8_2 = PIE_INT8_2;
_PIE_INT8_3 = PIE_INT8_3;
_PIE_INT8_4 = PIE_INT8_4;
_PIE_INT8_5 = PIE_INT8_5;
_PIE_INT8_6 = PIE_INT8_6;
_PIE_INT8_7 = PIE_INT8_7;
_PIE_INT8_8 = PIE_INT8_8;
_PIE_INT9_1 = PIE_INT9_1;
_PIE_INT9_2 = PIE_INT9_2;
_PIE_INT9_3 = PIE_INT9_3;
_PIE_INT9_4 = PIE_INT9_4;
_PIE_INT9_5 = PIE_INT9_5;
_PIE_INT9_6 = PIE_INT9_6;
_PIE_INT9_7 = PIE_INT9_7;
_PIE_INT9_8 = PIE_INT9_8;
_PIE_INT10_1 = PIE_INT10_1;
_PIE_INT10_2 = PIE_INT10_2;
_PIE_INT10_3 = PIE_INT10_3;
_PIE_INT10_4 = PIE_INT10_4;
_PIE_INT10_5 = PIE_INT10_5;
_PIE_INT10_6 = PIE_INT10_6;
_PIE_INT10_7 = PIE_INT10_7;
_PIE_INT10_8 = PIE_INT10_8;
_PIE_INT11_1 = PIE_INT11_1;
_PIE_INT11_2 = PIE_INT11_2;
_PIE_INT11_3 = PIE_INT11_3;
_PIE_INT11_4 = PIE_INT11_4;
_PIE_INT11_5 = PIE_INT11_5;
_PIE_INT11_6 = PIE_INT11_6;
_PIE_INT11_7 = PIE_INT11_7;
_PIE_INT11_8 = PIE_INT11_8;
_PIE_INT12_1 = PIE_INT12_1;
_PIE_INT12_2 = PIE_INT12_2;
_PIE_INT12_3 = PIE_INT12_3;
_PIE_INT12_4 = PIE_INT12_4;
_PIE_INT12_5 = PIE_INT12_5;
_PIE_INT12_6 = PIE_INT12_6;
_PIE_INT12_7 = PIE_INT12_7;
_PIE_INT12_8 = PIE_INT12_8;
_KNL_swi = KNL_swi;
_TSK_idle = TSK_idle;
_IDL_cpuLoad = IDL_cpuLoad;
_LNK_dataPump = LNK_dataPump;
_RTA_dispatcher = RTA_dispatcher;
_LOG_system = LOG_system;
_IDL_busyObj = IDL_busyObj;

/* MODULE GBL */

SECTIONS {
   .vers (COPY): {} /* version information */
}

-priority
-llnkrtdx.a28L
-ldrivers.a28L         /* device drivers support */
-lsioboth.a28L         /* supports both SIO models */
-lbios.a28L            /* DSP/BIOS support */
-lrtdxx.lib            /* RTDX support */
-lrts2800_ml.lib       /* C and C++ run-time library support */

/* MODULE MEM */
-stack 0x200
MEMORY {
   PAGE 1:   PIEVECT:    origin = 0xd00,         len = 0x100
   PAGE 1:   SRAM:       origin = 0x100000,      len = 0x10000
   PAGE 1:   MSARAM:     origin = 0x0,           len = 0x800
   PAGE 1:   LSARAM:     origin = 0x8000,        len = 0x2000
   PAGE 0:   OTP:        origin = 0x3d7800,      len = 0x400
   PAGE 0:   FLASH:      origin = 0x3d8000,      len = 0x20000
   PAGE 0:   H0SARAM:    origin = 0x3f8000,      len = 0x2000
   PAGE 0:   BOOTROM:    origin = 0x3ff000,      len = 0xfc0
   PAGE 1:   BEGIN_FLASH: origin = 0x3f7ff6,     len = 0x2
}
/* MODULE CLK */
SECTIONS {
   .clk: {
        CLK_F_gethtime = CLK_F_getshtime;
        CLK_A_TABBEG = .;
        *(.clk)
        CLK_A_TABEND = .;
        CLK_A_TABLEN = (. - CLK_A_TABBEG) / 2;
   } > LSARAM PAGE 1
}
_CLK_PRD = CLK_PRD;
_CLK_COUNTSPMS = CLK_COUNTSPMS;
_CLK_REGS = CLK_REGS;
_CLK_USETIMER = CLK_USETIMER;
_CLK_TIMERNUM = CLK_TIMERNUM;
_CLK_TCR = CLK_TCR;
_CLK_TDDR = CLK_TDDR;

/* MODULE PRD */
SECTIONS {
   .prd: {
        PRD_A_TABBEG = .;
        /* no PRD objects */
        PRD_A_TABEND = .;
        PRD_A_TABLEN = (. - PRD_A_TABBEG) / 12;
   } > LSARAM PAGE 1
}

/* MODULE RTDX */
_RTDX_interrupt_mask = 0x0;

/* MODULE SWI */
SECTIONS {
   .swi: {
        SWI_A_TABBEG = .;
        *(.swi)
        SWI_A_TABEND = .;
        SWI_A_TABLEN = (. - SWI_A_TABBEG) / 20;
   } > LSARAM PAGE 1
}

/* MODULE TSK */
SECTIONS {
   .tsk: {
        TSK_A_TABBEG = .;
        *(.tsk)
        TSK_A_TABEND = .;
        TSK_A_TABLEN = (. - TSK_A_TABBEG) / 40;
   } > LSARAM PAGE 1
}

/* MODULE IDL */
SECTIONS {
   .idl: {
        IDL_A_TABBEG = .;
        *(.idl)
        IDL_A_TABEND = .;
        IDL_A_TABLEN = (. - IDL_A_TABBEG) / 2;
        IDL_A_CALBEG = .;
        *(.idlcal)
        IDL_A_CALEND = .;
        IDL_A_CALLEN = (. - IDL_A_CALBEG) / 2;
   } > LSARAM PAGE 1
}



SECTIONS {
        frt:    {} > H0SARAM PAGE 0

        .bios:    {} > H0SARAM PAGE 0

        .pinit:   {} > H0SARAM PAGE 0

        .text:    {} > H0SARAM PAGE 0

        .cinit:    {} > H0SARAM PAGE 0

        .switch:    {} > H0SARAM PAGE 0

        .gblinit:    {} > H0SARAM PAGE 0

        .sysinit:    {} > H0SARAM PAGE 0

        .trcdata:    {} > H0SARAM PAGE 0

        .rtdx_text: {}  > H0SARAM PAGE 0

        .hwi: {
       /* no HWI stubs are necessary */
       }  > H0SARAM PAGE 0

        .bss:     {} > LSARAM PAGE 1

        .sysdata: {} > LSARAM PAGE 1

        .dsm: {} > LSARAM PAGE 1

        .mem: 	  {} > LSARAM PAGE 1

        .cio:     {} > LSARAM PAGE 1

        .data:    {} > LSARAM PAGE 1

        .gio:     {} > LSARAM PAGE 1

        .sys:     {} > LSARAM PAGE 1

        .sysregs: {} > LSARAM PAGE 1

        .const:    {} > LSARAM PAGE 1

        .ebss:     {} > LSARAM PAGE 1

        .rtdx_data: {}  > LSARAM PAGE 1

        .hwi_disp_sec:     {} > LSARAM PAGE 1

        .TSK_idle$stk: {
            *(.TSK_idle$stk)
        } > LSARAM PAGE 1

        /* LOG_system buffer */
        .LOG_system$buf: align = 0x40 {} > LSARAM PAGE 1

        GROUP {
         .econst: {} 
         .printf (COPY): {} 
        } > LSARAM PAGE 1

        .args: fill=0 {
            *(.args)
            . += 0x4;
        } > LSARAM PAGE 1

       /* RTA_fromHost buffer */
       .hst1: align = 0x4 {} > LSARAM PAGE 1

       /* RTA_toHost buffer */
       .hst0: align = 0x4 {} > LSARAM PAGE 1

        .trace: fill = 0x0 {
           _SYS_PUTCBEG = .;
           . += 0x200;
           _SYS_PUTCEND = . - 1;
        } > LSARAM PAGE 1

        .hst: {
             HST_A_TABBEG = .;
            _HST_A_TABBEG = .;
            *(.hst)
            HST_A_TABEND = .;
            _HST_A_TABEND = .;
             HST_A_TABLEN = (. - _HST_A_TABBEG) / 10;
            _HST_A_TABLEN = (. - _HST_A_TABBEG) / 10;
        } > LSARAM PAGE 1

        .log: {
             LOG_A_TABBEG = .;
            _LOG_A_TABBEG = .;
            *(.log)
            LOG_A_TABEND = .;
            _LOG_A_TABEND = .;
             LOG_A_TABLEN = (. - _LOG_A_TABBEG) / 10;
            _LOG_A_TABLEN = (. - _LOG_A_TABBEG) / 10;
        } > LSARAM PAGE 1

        .pip: {
             PIP_A_TABBEG = .;
            _PIP_A_TABBEG = .;
            *(.pip)
            PIP_A_TABEND = .;
            _PIP_A_TABEND = .;
             PIP_A_TABLEN = (. - _PIP_A_TABBEG) / 50;
            _PIP_A_TABLEN = (. - _PIP_A_TABBEG) / 50;
        } > LSARAM PAGE 1

        .sts: {
             STS_A_TABBEG = .;
            _STS_A_TABBEG = .;
            *(.sts)
            STS_A_TABEND = .;
            _STS_A_TABEND = .;
             STS_A_TABLEN = (. - _STS_A_TABBEG) / 8;
            _STS_A_TABLEN = (. - _STS_A_TABBEG) / 8;
        } > LSARAM PAGE 1

        .stack: {
            GBL_stackbeg = .;
            *(.stack)
            GBL_stackend = GBL_stackbeg + 0x200 - 1;
        _HWI_STKBOTTOM = GBL_stackbeg;
            _HWI_STKTOP = (GBL_stackend + 1);
        } > MSARAM PAGE 1

        .hwi_vec: START(_hwi_vec_loadstart), END(_hwi_vec_loadend), SIZE(_hwi_vec_loadsize), RUN_START(_hwi_vec_runstart) {
       /* no HWI stubs are necessary */
       }  > PIEVECT PAGE 1

}

