#include "stm32f10x.h"  //包含需要的头文件
#include "BEEP.h"      //包含需要的头文件 
#include "delay.h"      //包含需要的头文件


void BEEP_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	GPIO_ResetBits(GPIOA,GPIO_Pin_5);//设置GPIOA--GPIO_Pin_5为低电平
}

void beepOn(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_5);
	delay_ms(3000);		//延时三秒
}
void beepOff(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_5);
}

