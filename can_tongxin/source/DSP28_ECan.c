/****************************************************************************
*
*�ļ�����DSP28_ECan.c
*
*��  �ܣ�2812�ڲ�ECanģ��ĳ�ʼ���ļ�
*
*��  ��: likyo from hellodsp
*
****************************************************************************/

#include "DSP281x_Device.h"
//#include "DSP281x_Examples.h"

/****************************************************************************
*
*��    �ƣ�InitECan()
*
*��    �ܣ���ʼ��ECanģ��
*
*��ڲ�������
*
*���ڲ�������
*
****************************************************************************/

void InitECan(void)
{	
	struct ECAN_REGS ECanaShadow;

	EALLOW;	
	ECanaShadow.CANTIOC.all	= ECanaRegs.CANTIOC.all;
    ECanaShadow.CANTIOC.bit.TXFUNC = 1;
    ECanaRegs.CANTIOC.all = ECanaShadow.CANTIOC.all;
	ECanaShadow.CANRIOC.all = ECanaRegs.CANRIOC.all;
	ECanaShadow.CANRIOC.bit.RXFUNC = 1;
	ECanaRegs.CANRIOC.all = ECanaShadow.CANRIOC.all;
	EDIS;

	ECanaRegs.CANME.all = 0;
	
	ECanaMboxes.MBOX0.MSGID.all= 0x9555AAA0;
	ECanaMboxes.MBOX1.MSGID.all = 0x9555AAA1;
	ECanaMboxes.MBOX2.MSGID.all=0x9555AAA2;
	ECanaMboxes.MBOX3.MSGID.all=0x9555AAA3;
	ECanaMboxes.MBOX4.MSGID.all=0x9555AAA4;
	ECanaMboxes.MBOX5.MSGID.all=0x9555AAA5;
	ECanaMboxes.MBOX6.MSGID.all=0x9555AAA6;
	ECanaMboxes.MBOX7.MSGID.all=0x9555AAA7;
	ECanaMboxes.MBOX8.MSGID.all=0x9555AAA8;
	ECanaMboxes.MBOX9.MSGID.all=0x9555AAA9;
	ECanaMboxes.MBOX10.MSGID.all=0x9555AAAA;
	ECanaMboxes.MBOX11.MSGID.all=0x9555AAAB;
	ECanaMboxes.MBOX12.MSGID.all=0x9555AAAC;
	ECanaMboxes.MBOX13.MSGID.all=0x9555AAAD;
	ECanaMboxes.MBOX14.MSGID.all=0x9555AAAE;    
	ECanaMboxes.MBOX15.MSGID.all=0x9555AAAF; 
	   
	ECanaMboxes.MBOX16.MSGID.all=0x9555AAA0;    
	ECanaMboxes.MBOX17.MSGID.all=0x9555AAA1;    
	ECanaMboxes.MBOX18.MSGID.all=0x9555AAA2;    
	ECanaMboxes.MBOX19.MSGID.all=0x9555AAA3;    
	ECanaMboxes.MBOX20.MSGID.all=0x9555AAB4;
	ECanaMboxes.MBOX21.MSGID.all=0x9555AAB5;
	ECanaMboxes.MBOX22.MSGID.all=0x9555AAB6;
	ECanaMboxes.MBOX23.MSGID.all=0x9555AAB7;
	ECanaMboxes.MBOX24.MSGID.all=0x9555AAB8;
	ECanaMboxes.MBOX25.MSGID.all=0x9555AAB9;
	ECanaMboxes.MBOX26.MSGID.all=0x9555AABA;
	ECanaMboxes.MBOX27.MSGID.all=0x9555AABB;
	ECanaMboxes.MBOX28.MSGID.all=0x9555AABC;
	ECanaMboxes.MBOX29.MSGID.all=0x9555AABD;
	ECanaMboxes.MBOX30.MSGID.all=0x9555AABE;   
	ECanaMboxes.MBOX31.MSGID.all=0x9555AABF;

	ECanaRegs.CANMD.all = 0xFFFF0000;
	ECanaRegs.CANME.all = 0xFFFFFFFF;

	ECanaMboxes.MBOX0.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX1.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX2.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX3.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX4.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX5.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX6.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX7.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX8.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX9.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX10.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX11.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX12.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX13.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX14.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX15.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX16.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX17.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX18.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX19.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX20.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX21.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX22.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX23.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX24.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX25.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX26.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX27.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX28.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX29.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX30.MSGCTRL.all = 0x00000000;
    ECanaMboxes.MBOX31.MSGCTRL.all = 0x00000000;

	 //ָ�����ͺͽ�����������ݳ���Ϊ8���ֽ�
    ECanaMboxes.MBOX0.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX1.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX2.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX3.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX4.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX5.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX6.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX7.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX8.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX9.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX10.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX11.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX12.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX13.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX14.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX15.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX16.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX17.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX18.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX19.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX20.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX21.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX22.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX23.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX24.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX25.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX26.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX27.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX28.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX29.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX30.MSGCTRL.bit.DLC = 8;
    ECanaMboxes.MBOX31.MSGCTRL.bit.DLC = 8;

	EALLOW;
	ECanaRegs.CANMIM.all = 0xFFFFFFFF;
	//�����޸����üĴ���
	ECanaShadow.CANMC.all = ECanaRegs.CANMC.all;
	ECanaShadow.CANMC.bit.CCR = 1; 
	ECanaRegs.CANMC.all = ECanaShadow.CANMC.all;
	EDIS;
	//�ȴ�CCEλ��1����������CPU�޸����üĴ���
	do
	{
		ECanaShadow.CANES.all = ECanaRegs.CANES.all;	
	}while(ECanaShadow.CANES.bit.CCE !=1);
	
	//����eCanģ���ʱ��
	EALLOW;
	ECanaShadow.CANBTC.all = ECanaRegs.CANBTC.all;
	ECanaShadow.CANBTC.bit.BRPREG = 39;				// 250Kb/s @ 150 MHz SYSCLKOUT
    ECanaShadow.CANBTC.bit.TSEG2REG = 2;
    ECanaShadow.CANBTC.bit.TSEG1REG = 10;
    ECanaShadow.CANBTC.bit.SAM = 1;                 //CANģ���������ÿλ���ݲ���3�Σ�����ռ������ֵ��Ϊ���ս��
    ECanaRegs.CANBTC.all = ECanaShadow.CANBTC.all;	

	//�ֲ���������λ

	//
	ECanaShadow.CANMC.all = ECanaRegs.CANMC.all;
	ECanaShadow.CANMC.bit.CCR = 0 ;            		// Set CCR = 0
    ECanaRegs.CANMC.all = ECanaShadow.CANMC.all;
	EDIS;

	 do
    {
      ECanaShadow.CANES.all = ECanaRegs.CANES.all;
    } while(ECanaShadow.CANES.bit.CCE != 0 ); 
    
    //����eCANģ�������Բ���ģʽ��ʹ��eCAN ����ǿ����
	EALLOW;
	ECanaShadow.CANMC.all = ECanaRegs.CANMC.all;
	ECanaShadow.CANMC.bit.STM = 1;                    //CANģʽ�������Բ���ģʽ
	ECanaShadow.CANMC.bit.SCB = 1;                    //������eCANģʽ
	ECanaRegs.CANMC.all = ECanaShadow.CANMC.all;
    EDIS;
    		
	ECanaRegs.CANMIM.all = 0xFFFFFFFF;
	ECanaRegs.CANMIL.all = 0x00000000;
	ECanaRegs.CANGIF0.all = 0xFFFFFFFF;
	ECanaRegs.CANGIM.bit.I0EN = 1;

	PieCtrlRegs.PIEIER9.bit.INTx5 = 1;
	PieCtrlRegs.PIEACK.all=0x0100;

    IER |= M_INT9;

}	

//===========================================================================
// No more.
//===========================================================================
