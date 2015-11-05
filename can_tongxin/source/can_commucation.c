#include "DSP281x_Device.h"
#include "can_communication.h"

const unsigned char Hex2Asc[]="0123456789ABCDEF";
int Uc = 755;
int Uc1 = 0;
int I = 15;

unsigned char ASC2Hex(unsigned char x)
{
	if(x>='0' && x<='9')
	{
		x = x - '0';
	}
	if(x>='A' && x<='Z')
	{
		x = x - 'A' + 0x0A; 
	}
	return x;		
}

CanTx_comm_Send()
{

	ECanaRegs.CANTRS.all = 0x00000001;
	while(ECanaRegs.CANTA.all == 0);
	ECanaRegs.CANTA.all = 0x00000001;
	SendData(Uc);
//	SendData(&I,sizeof(I));
	PieCtrlRegs.PIEACK.all = 0x0100;
}


CanRx_comm_Deal()
{
	while(ECanaRegs.CANRMP.all != 0x00010000);
	ECanaRegs.CANRMP.all = 0x00010000;
	DealData();
	PieCtrlRegs.PIEACK.all = 0x0100;
		
}


void SendData(int x)
{
	unsigned char asc[2];
	unsigned long int f[5];
	unsigned int sum = 0;
	int i,j=0;

	asc[0] = (x>>8)&0xFF;
	asc[1] = (x)&0xFF;
	for(i=0; i<2; i++)
	{
		f[j++] = Hex2Asc[(asc[i]>>4)&0x0F];
		f[j++] = Hex2Asc[(asc[i])&0x0F];
		sum += f[j-2]+f[j-1];
	}
	
	ECanaMboxes.MBOX0.MDL.all =(f[0]<<24)+(f[1]<<16)+(f[2]<<8)+f[3];
	ECanaMboxes.MBOX0.MDH.all = sum&0xFFFFFFFF;	
}


void DealData(void)
{
	unsigned long int s[2];
	unsigned char f[2];
	unsigned int sum,Tes_sum;
	s[0] = ECanaMboxes.MBOX16.MDL.all;
	s[1] = ECanaMboxes.MBOX16.MDH.all;
	
	sum = (int)(((s[0]>>24)&0xFF)+((s[0]>>16)&0xFF)+((s[0]>>8)&0xFF)+(s[0]&0xFF));
	Tes_sum = ((s[1]>>8)&0xFF)+(s[1]&0xFF);
	if(sum == Tes_sum)
	{
		f[0]=((s[0]>>24)&0xFF)<<4+(s[0]>>16)&0xFF;
		f[1]=((s[0]>>8)&0xFF)<<4+(s[0]&0xFF);	
	}
	Uc1 = f[0]<<8 + f[1];	
}














