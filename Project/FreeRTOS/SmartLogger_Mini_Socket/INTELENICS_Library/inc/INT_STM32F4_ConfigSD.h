/**
  ******************************************************************************
  * <h2><center>&copy; Intelenics Co., Ltd.</center></h2>
  * @file    	INT_STM32F4_ConfigSD.h
  * @author  	BIG M
  * @version 	V1.0.0
  * @date    	11-April-2014
  * @brief   
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */
	
#ifndef _INT_STM32F4_CONFIGSD_H
#define _INT_STM32F4_CONFIGSD_H

#include <stdint.h>
#include "ff.h"
#include "SL_ConfigStruct.h"

#define CHKTEXT_BASEADDR					0x00000000

/* SLINFO.HEX File -----------------------------------------------------------*/
#define INFO_FILE									"SLINFO.HEX"
/* For EEPROM */
#define INFO_BASEADDR							0x00001000 
#define USER_BASEADDR							0x00001000   						/* User Name */
#define PASSWORD_BASEADDR					0x00001028							/* Password */
#define SERIAL_BASEADDR						0x00001050							/* Serial Number */
#define DESTSERIAL_BASEADDR				0x00001058							/* Destination Serial Number */
#define FLAGREGIS_BASEADDR				0x00001060							/* Flag Registered */
/* For SDCard */
#define SD_USER_BASEADDR					0x00000010   						/* User Name */
#define SD_PASSWORD_BASEADDR			0x00000040							/* Password */
#define SD_SERIAL_BASEADDR				0x00000080							/* Serial Number */
#define SD_DESTSERIAL_BASEADDR		0x00000090							/* Destination Serial Number */
#define SD_FLAGREGIS_BASEADDR			0x000000A0							/* Flag Registered */

/* SLSTATUS.HEX File ---------------------------------------------------------*/
#define STAT_FILE									"SLSTATUS.HEX"
#define STATUS_BASEADDR						0x00001100
#define DOUT1_BASEADDR						0x00001100
#define DOUT2_BASEADDR						0x00001101
#define DOUT3_BASEADDR						0x00001102
#define DOUT4_BASEADDR						0x00001103
#define VALVE_BASEADDR						0x00001104
#define NETFLOW_BASEADDR					0x00001105

/*SLCONFIG.HEX File ----------------------------------------------------------*/
#define CONFIG_FILE								"SLCONFIG.HEX"
#define DEVeCONF_BASEADDR					0x00000010
#define PROPERTIES_BASEADDR				0x00000030
#define OPERATING_BASEADDR				0x000000E0
#define BUZZER_BASEADDR						0x00000100
#define WORKING_BASEADDR					0x00000130
#define NETWORK_BASEADDR					0x00000150

#define SEN420CH1CONF_BASEADDR		0x000001D0
#define SEN420CH2CONF_BASEADDR		(SEN420CH1CONF_BASEADDR+0x00000050)
#define SEN420CH3CONF_BASEADDR		(SEN420CH2CONF_BASEADDR+0x00000050)
#define SEN420CH4CONF_BASEADDR		(SEN420CH3CONF_BASEADDR+0x00000050)
#define SEN420CH5CONF_BASEADDR		(SEN420CH4CONF_BASEADDR+0x00000050)
#define SEN420CH6CONF_BASEADDR		(SEN420CH5CONF_BASEADDR+0x00000050)
extern const uint32_t SEN420CONF_BASEADDR[];

#define SENADCCH1CONF_BASEADDR		(SEN420CH6CONF_BASEADDR+0x00000050)				//0x3b0
#define SENADCCH2CONF_BASEADDR		(SENADCCH1CONF_BASEADDR+0x00000050)
extern const uint32_t SENADCCONF_BASEADDR[];

#define SENsMODBUSCONF_BASEADDR		(SENADCCH2CONF_BASEADDR+0x00000060)				//0x460
#define SENsPULCONF_BASEADDR			(SENsMODBUSCONF_BASEADDR+0x00000020)

#define DIGItIN1_BASEADDR					(SENsPULCONF_BASEADDR+0x00000020)					//0x4a0
#define DIGItIN2_BASEADDR					(DIGItIN1_BASEADDR+0x00000010)
#define DIGItIN3_BASEADDR					(DIGItIN2_BASEADDR+0x00000010)
#define DIGItIN4_BASEADDR					(DIGItIN3_BASEADDR+0x00000010)
#define DIGItIN5_BASEADDR					(DIGItIN4_BASEADDR+0x00000010)
#define DIGItIN6_BASEADDR					(DIGItIN5_BASEADDR+0x00000010)
#define DIGItIN7_BASEADDR					(DIGItIN6_BASEADDR+0x00000010)
#define DIGItIN8_BASEADDR					(DIGItIN7_BASEADDR+0x00000010)
#define DIGItIN9_BASEADDR					(DIGItIN8_BASEADDR+0x00000010)
#define DIGItIN10_BASEADDR				(DIGItIN9_BASEADDR+0x00000010)
#define DIGItIN11_BASEADDR				(DIGItIN10_BASEADDR+0x00000010)
#define DIGItIN12_BASEADDR				(DIGItIN11_BASEADDR+0x00000010)
extern const uint32_t DIGItIN_BASEADDR[];

#define SEN420CH1ALARM_BASEADDR		(DIGItIN12_BASEADDR+0x00000020)						//0x570
#define SEN420CH2ALARM_BASEADDR		(SEN420CH1ALARM_BASEADDR+0x00000020)
#define SEN420CH3ALARM_BASEADDR		(SEN420CH2ALARM_BASEADDR+0x00000020)
#define SEN420CH4ALARM_BASEADDR		(SEN420CH3ALARM_BASEADDR+0x00000020)
#define SEN420CH5ALARM_BASEADDR		(SEN420CH4ALARM_BASEADDR+0x00000020)
#define SEN420CH6ALARM_BASEADDR		(SEN420CH5ALARM_BASEADDR+0x00000020)
extern const uint32_t SEN420ALARMn_BASEADDR[];

#define SENADCCH1ALARM_BASEADDR		(SEN420CH6ALARM_BASEADDR+0x00000020)			//0x630
#define SENADCCH2ALARM_BASEADDR		(SENADCCH1ALARM_BASEADDR+0x00000020)
extern const uint32_t SENADCALARMn_BASEADDR[];

#define SENsMODBUSALARM_BASEADDR	(SENADCCH2ALARM_BASEADDR+0x00000020)			//0x670
#define SENsPULALARM_BASEADDR			(SENsMODBUSALARM_BASEADDR+0x00000020)

#define VALVECONF_BASEADDR				(SENsPULALARM_BASEADDR+0x00000020)				//0x6b0

#define SEN420CH1CAL_BASEADDR			(VALVECONF_BASEADDR+0x00000020)						//0x6d0
#define SEN420CH2CAL_BASEADDR			(SEN420CH1CAL_BASEADDR+0x00000020)
#define SEN420CH3CAL_BASEADDR			(SEN420CH2CAL_BASEADDR+0x00000020)
#define SEN420CH4CAL_BASEADDR			(SEN420CH3CAL_BASEADDR+0x00000020)
#define SEN420CH5CAL_BASEADDR			(SEN420CH4CAL_BASEADDR+0x00000020)
#define SEN420CH6CAL_BASEADDR			(SEN420CH5CAL_BASEADDR+0x00000020)
extern const uint32_t SEN420CHnCAL_BASEADDR[];

#define VALVE420INCAL_BASEADDR		(SEN420CH6CAL_BASEADDR+0x00000020)				//0x790
#define VALVE420OUTCAL_BASEADDR		(VALVE420INCAL_BASEADDR+0x00000020)

#define SENPULSEADJ_BASEADDR			(VALVE420OUTCAL_BASEADDR+0x00000020)			//0x7D0

#define SIZE_1BYTE								1
#define SIZE_2BYTE								2
#define SIZE_4BYTE								4
#define SIZE_8BYTE								8
#define SIZE_10BYTE								10
#define SIZE_20BYTE								20
#define SIZE_40BYTE								40

FRESULT xCONFIGSD_WriteConfig(FIL *file, uint32_t baseAddr, void *pStruct, uint32_t struct_size);
FRESULT xCONFIGSD_ReadConfig(FIL *file, uint32_t baseAddr, void *pStruct, uint32_t struct_size);


#endif /*_INT_STM32F4_CONFIGSD_H*/

