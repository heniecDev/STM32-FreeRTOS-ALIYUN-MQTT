#ifndef __BEEP_H
#define __BEEP_H	 
#include "sys.h"
//�������˿ڶ���
#define BEEP PAout(5)	// BEEP,�������ӿ�		
void BEEP_Init(void);	//��ʼ��		
void beepOn(void);
void beepOff(void);
#endif
