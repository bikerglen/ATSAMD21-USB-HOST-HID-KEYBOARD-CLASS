/*
 * uhi_hid_sony_dualshock3.h
 *
 * Created: 10/7/2018 1:20:14 PM
 *  Author: glen
 */ 


#ifndef UHI_HID_SONY_DUALSHOCK3_H_
#define UHI_HID_SONY_DUALSHOCK3_H_


#include "conf_usb_host.h"
#include "usb_protocol.h"
#include "usb_protocol_hid.h"
#include "uhi.h"

#ifdef __cplusplus
extern "C" {
	#endif

	#define UHI_HID_SONY_DUALSHOCK3 { \
		.install = uhi_hid_sony_dualshock3_install, \
		.enable = uhi_hid_sony_dualshock3_enable, \
		.uninstall = uhi_hid_sony_dualshock3_uninstall, \
		.sof_notify = NULL, \
	}

	extern uhc_enum_status_t uhi_hid_sony_dualshock3_install(uhc_device_t* dev);
	extern void uhi_hid_sony_dualshock3_enable(uhc_device_t* dev);
	extern void uhi_hid_sony_dualshock3_uninstall(uhc_device_t* dev);

	#ifdef __cplusplus
}
#endif


#endif /* UHI_HID_SONY_DUALSHOCK3_H_ */