/*
 * uhi_hid_gravis_gamepad_pro.h
 *
 * Created: 10/7/2018 1:01:11 PM
 *  Author: glen
 */ 

#ifndef UHI_HID_GRAVIS_GAMEPAD_PRO_H_
#define UHI_HID_GRAVIS_GAMEPAD_PRO_H_

#include "conf_usb_host.h"
#include "usb_protocol.h"
#include "usb_protocol_hid.h"
#include "uhi.h"

#ifdef __cplusplus
extern "C" {
	#endif

	#define UHI_HID_GRAVIS_GAMEPAD_PRO { \
		.install = uhi_hid_gravis_gamepad_pro_install, \
		.enable = uhi_hid_gravis_gamepad_pro_enable, \
		.uninstall = uhi_hid_gravis_gamepad_pro_uninstall, \
		.sof_notify = NULL, \
	}

	extern uhc_enum_status_t uhi_hid_gravis_gamepad_pro_install(uhc_device_t* dev);
	extern void uhi_hid_gravis_gamepad_pro_enable(uhc_device_t* dev);
	extern void uhi_hid_gravis_gamepad_pro_uninstall(uhc_device_t* dev);

	#ifdef __cplusplus
}
#endif

#endif /* UHI_HID_GRAVIS_GAMEPAD_PRO_H_ */