#include "DSP281x_Device.h"


int HandShake(void)
{
	SendData(0x00);      //一上电先给BMS发送一条开始信息
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


			if(receive_status() == 0x31)     //辨识报文
			{
				SendData(0xAA);      //发送进入下一状态的信息
				Can_Status = 2;
			}
			else
        	{
				resend(0x00);
				Can_Status = 1;
			}


			if(receive_status() == 0x32)
			{
				SendData(0x1234ffff);//发送时间同步和充电机最大输出能力参数
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
				SendData(完成充电准备报文);//发送完成充电准备报文
				Can_Status = 4;
			}
			else
			{
				resend(发送时间同步和充电机最大输出能力参数);
				Can_Status = 3;
			}
			break;


			if(receive_status() == 0x34)
			{
				SendData(充电机充电状态);//发送充电机充电状态
			}
			else
			{	
				resend(充电准备报文);
				Can_Status = 4;
			}
			break;

			if(receive_status() == 0x35)
			{
				SendData(发送终止充电报文);//发送终止充电报文
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
				SendData(发送充电机充电统计报文);//发送充电机充电统计报文
				Can_Status = 7;
			}
			else
			{	
				resend();
				Can_Status = 6;
			}
			break;

		case 7:
			关闭充电
			break;

		case 8:
			超时状态
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
			if(ECanaRegs.CANRMP.bit.RMP1 == 1)             //等待RMP置位，表示接收邮箱1接收到消息
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