#include "DSP281x_Device.h"


int HandShake(void)
{
	SendData(0x00);      //һ�ϵ��ȸ�BMS����һ����ʼ��Ϣ
	time_delay++;
	if(time_deay > 5000)
	{
		time_delay = 0;
	}

	while(DealData() == 0x31)
	{
		SendData(0xAA);
		return(1);
	}
}


			if(receive_status() == 0x31)     //��ʶ����
			{
				SendData(0xAA);      //���ͽ�����һ״̬����Ϣ
				Can_Status = 2;
			}
			else
        	{
				resend(0x00);
				Can_Status = 1;
			}


			if(receive_status() == 0x32)
			{
				SendData(0x1234ffff);//����ʱ��ͬ���ͳ�����������������
				Can_Status = 3;
			}
			else
			{
				resend(0xAA);
				Can_Status = 2;
			}
			break;
				

			if(receive_status() == 0x33)
			{
				SendData(��ɳ��׼������);//������ɳ��׼������
				Can_Status = 4;
			}
			else
			{
				resend(����ʱ��ͬ���ͳ�����������������);
				Can_Status = 3;
			}
			break;


			if(receive_status() == 0x34)
			{
				SendData(�������״̬);//���ͳ������״̬
			}
			else
			{	
				resend(���׼������);
				Can_Status = 4;
			}
			break;

			if(receive_status() == 0x35)
			{
				SendData(������ֹ��籨��);//������ֹ��籨��
				Can_Status = 6;
			}
			else
			{	
				resend();
				Can_Status = 5;
			}
			break;

			if(receive_status() == 0x36)
			{
				SendData(���ͳ������ͳ�Ʊ���);//���ͳ������ͳ�Ʊ���
				Can_Status = 7;
			}
			else
			{	
				resend();
				Can_Status = 6;
			}
			break;

		case 7:
			�رճ��
			break;

		case 8:
			��ʱ״̬
			break;

		default:
			break;

	}
}



static int receive_status(void)
{
	int count = 0;
	int status = 0;
	while(count <= 5000)
	{
		if(ECanaRegs.CANRMP.all != 0x00000000)
		{
			ECanaShadow.CANRMP.all = ECanaRegs.CANRMP.all;
			if(ECanaRegs.CANRMP.bit.RMP1 == 1)             //�ȴ�RMP��λ����ʾ��������1���յ���Ϣ
			{ 
				status= DealData();						  
				return (status);
			}
	}
	count++;
	if(count >5000)	
	{
	    count = 0;
	    return(8);
	}
}



resend()
{
		
}