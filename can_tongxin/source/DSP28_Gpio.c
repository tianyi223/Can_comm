
/****************************************************************************
*
*文件名：DSP28_Gpio.c
*
*功  能：2812通用输入输出口GPIO的初始化函数
*
*作  者: likyo from hellodsp
*
****************************************************************************/

#include "DSP281x_Device.h"

/****************************************************************************
*
*名    称：InitGpio()
*
*功    能：初始化Gpio，使得Gpio的引脚处于已知的状态，例如确定其功能是特定功能
*          还是通用I/O。如果是通用I/O，是输入还是输出，等等。
*
*入口参数：无
*
*出口参数：无
*
****************************************************************************/

void InitGpio(void)
{

     EALLOW;

	 GpioMuxRegs.GPFMUX.bit.CANTXA_GPIOF6 = 1;
     GpioMuxRegs.GPFMUX.bit.CANRXA_GPIOF7 = 1;
     
     EDIS;

}	
	
//===========================================================================
// No more.
//===========================================================================
