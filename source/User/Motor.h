
#ifndef	__Motor_H__
#define	__Motor_H__

void Motor_GPIO_Init( void );

void Delay(int nCount);

// �̵���A�øߵ�ƽ 
void SetRelayA( void );

// �̵���B�øߵ�ƽ 
void SetRelayB( void );

// �̵���A�õ͵�ƽ
void ReSetRelayA( void );

// �̵���B�õ͵�ƽ
void ReSetRelayB( void );

void SetRelay( void );

void ReSetRelay( void );


void Motor_Entry( void *pvParameters );
#endif	/* __Motor_H__ */
