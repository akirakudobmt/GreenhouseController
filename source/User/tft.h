

#ifndef __TFT_H__
#define __TFT_H__

// ��Ļ��������
#define	TFT_DRIVER_ILI9326			(1)
//#define	TFT_DRIVER_ILI9327			(2)

// �����С
typedef enum tagTftFontSizeEnum
{
	TftFontSize_16x16 = 0,

	TftFontSize_Cnt,
	TftFontSize_Invalid = TftFontSize_Cnt,

} TftFontSizeEnum;

// ��ʼ��
void TFT_Initialize( void );

// ����
void TFT_ClearScreen( unsigned int uiColor );

// �����軭
void TFT_DrawRectangle(	unsigned int	uiStartX,
						unsigned int	uiEndX,
						unsigned int	uiStartY,
						unsigned int	uiEndY,
						unsigned int	uiColor	);

// �ַ����軭
void TFT_DrawString(	unsigned int	uiOffsetX,
						unsigned int	uiOffsetY,
						unsigned char*	pucString,
						unsigned int	uiForeColor,
						unsigned int	uiBackColor,
						TftFontSizeEnum	enFontSize	);


#endif

