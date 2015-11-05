#include "DSP281x_Device.h"
void main()
{
	InitSysCtrl();

	DINT;
    InitGpio();
	InitPieCtrl();

	IER = 0x0000;
	IFR = 0x0000;

	InitPieVectTable();

	EINT;
	ERTM;

	InitECan();

}  









