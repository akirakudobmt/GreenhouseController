
#include	"stm32f10x.h"
#include	"sys.h"

int main( void )
{
	Stm32_Clock_Init();//ϵͳʱ������
	RCC->APB2ENR |= 0x00000001; //����afioʱ��
//	AFIO->MAPR = (0x00FFFFFF & AFIO->MAPR)|0x04000000;          //�ر�JTAG 
	RCC->APB2ENR|=0X0000001c;//��ʹ������IO PORTa,b,cʱ��


	while ( 1 )
	{
		// do something here
	}
	

}
