/*
********************************************************************************
*                                USB Hid Driver
*
*                (c) Copyright 2006-2010, All winners Co,Ld.
*                        All Right Reserved
*
* FileName		:  HidFunDrv.h
*
* Author		:  Javen
*
* Date			:  2010/06/02
*
* Description	:  Hid����������غ����Ķ���
*
* Others		:  NULL
*
* History:
*		<time> 			<author>	 <version >		<desc>
*	   2010.06.02		Javen			1.0			build this file
*
********************************************************************************
*/

#ifndef  __HIDFUNDRV_H__
#define  __HIDFUNDRV_H__

__s32 usbMouseProbe(HidDev_t *HidDev);
__s32 usbMouseRemove(HidDev_t *HidDev);

__s32 usbKeyBoardProbe(HidDev_t *HidDev);
__s32 usbKeyBoardRemove(HidDev_t *HidDev);


#endif   //__HIDFUNDRV_H__
