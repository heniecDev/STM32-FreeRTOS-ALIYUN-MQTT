/************************室内安防系统************************/

/***************功能说明***************/

1：下位机
	红外槽型光耦：可选择打开或者关闭、检测是否有人室内盗窃 并提供报警（选做：检测有多少人）
	MQ2气体：检测是否燃气泄漏并提供报警
	DHT11温湿度传感器：监测温湿度状况
	光敏电阻/BH1750：检测光照状况、如果业主离开房屋，打开系统开关，如果发生异常情况，如开灯等也能说明有人，此时也可以报警
	//震动传感器：检测地震、提供报警（暂时不做此功能）
	LED1(DS1)/LED2(DS0)：模拟报警
	高电平蜂鸣器：
	esp01s:

2：上位机
	火宅检测显示（有&无）
	系统开关控制（开启可表示业主离开房屋，然后安防报警系统开启）
	报警状态显示（正在报警&无警报）
	温湿度显示
	光照强度显示
	烟雾数值显示
	室内是否有人显示（有人&无人）

3：LCD显示屏
	烟雾数值
	温湿度
	光照强度显示	
	室内是否有人

/***************硬件环境***************/
1：STM32F103RCT6
2：DHT11温湿度传感器
3：BH1750（GY30）光照强度传感器
4：MQ2烟雾传感器
5：高电平触发蜂鸣器
6：LCD屏幕
7：ESP8266-01S无线模块


/***************接线说明***************/
1：ESP8266-01S（5根线）
	RX PA2
	TX PA3
	复位 PA4
	VCC 3V3
	GND GND

2：DHT11（3根线）
	DATA PA6
	VCC 3V3
	GND GND

3：BH1750（5根线）
	SCL PC12
	SDA PC11
	ADDR GND
	VCC 5V
	GND GND

4：MQ2（三根线）
	AO PA0
	VCC 5V
	GND GND

5：蜂鸣器（三根线）
	IO PA5
	VCC 5V
	GND GND
6:LCD（自带）

7：槽型光耦（三根线）
	OUT PA7
	VCC 3.3
	GND GND
	
7：LED
	LED1 PD2
	LED2 PA8

