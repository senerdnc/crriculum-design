#ifndef __KEY_H
#define __KEY_H	 
#include "sys.h"
#ifdef __cplusplus
extern "C"
{
#endif

//#define KEY0 PEin(4)   	//PE4
//#define KEY1 PEin(3)	//PE3 
//#define KEY2 PEin(2)	//PE2
//#define KEY3 PAin(0)	//PA0  WK_UP
 
#define KEY0  GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4)//��ȡ����0
#define KEY1  GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_3)//��ȡ����1
#define KEY2  GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_2)//��ȡ����2 
#define KEY3  GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_0)//��ȡ����3(WK_UP) 


#define KEY_UP 		4
#define KEY_LEFT	3
#define KEY_DOWN	2
#define KEY_RIGHT	1

void KEY_Init(void);//IO��ʼ��
u8 KEY_Scan(u8);  	//����ɨ�躯��	
#ifdef __cplusplus
}
#endif
	
#endif