// TI File $Revision: /main/2 $
// Checkin $Date: April 29, 2005   11:08:40 $
//###########################################################################
//
// FILE:	DSP281x_Sci.c
//
// FUNCTION:对SCI串口通信模块进行初始化.
//
//###########################################################################
// $TI Release: DSP281x C/C++ Header Files V1.20 $
// $Release Date: July 27, 2009 $
//###########################################################################

#include "DSP281x_Device.h"     // DSP281x Headerfile Include File
#include "DSP281x_Examples.h"   // DSP281x Examples Include File


void InitSci(void)
{
 /*   SciaRegs.SCICCR.bit.STOPBITS = 0;     //一个停止位
	SciaRegs.SCICCR.bit.PARITYENA = 0;    //不使用奇偶校验
	SciaRegs.SCICCR.bit.LOOPBKENA = 0;    //自测试模式禁止
	SciaRegs.SCICCR.bit.ADDRIDLE_MODE = 0;//空闲线模式
	SciaRegs.SCICCR.bit.SCICHAR = 7;      //字符长度为8位
	SciaRegs.SCICTL1.bit.RXENA = 1;       //接收使能
	SciaRegs.SCICTL1.bit.TXENA = 1;       //发送使能
	SciaRegs.SCIHBAUD = 0;                
	SciaRegs.SCILBAUD = 0xF3;             //波特率为19200
	SciaRegs.SCICTL2.bit.RXBKINTENA = 1;  //接收中断使能
	SciaRegs.SCICTL2.bit.TXINTENA = 1;    //发送中断使能
	SciaRegs.SCICTL1.bit.SWRESET = 0;     //重启SCI
*/
}	
	
//===========================================================================
// No more.
//===========================================================================
