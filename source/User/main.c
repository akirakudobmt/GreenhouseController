
#include	"stm32f10x.h"
#include	"sys.h"
#include	"Business.h"
#include	"FreeRTOS.h"
#include	"task.h"
#include	"queue.h"
#include	"list.h"
#include	"portable.h"
#include	"freertosconfig.h"
#include	"tft.h"

int main( void )
{
	xQueueHandle xQueue;
	
	Stm32_Clock_Init();//ϵͳʱ������
	RCC->APB2ENR |= 0x00000001; //����afioʱ��
//	AFIO->MAPR = (0x00FFFFFF & AFIO->MAPR)|0x04000000;          //�ر�JTAG 
	RCC->APB2ENR|=0X0000001c;//��ʹ������IO PORTa,b,cʱ��
	
	TFT_Initialize();
	
	xQueue = xQueueCreate( 10, sizeof( long ) );
	if( xQueue != NULL )
	{
	
		xTaskCreate(Business_Entry,"Business",1000, (void*)xQueue , 1 ,NULL);

	}
	

	
	vTaskStartScheduler();
	
	while ( 1 )
	{
		// do something here
	}
	

}
