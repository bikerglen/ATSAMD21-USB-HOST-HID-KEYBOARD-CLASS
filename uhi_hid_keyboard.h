#ifndef _UHI_HID_KEYBOARD_H_
#define _UHI_HID_KEYBOARD_H_

#include "conf_usb_host.h"
#include "usb_protocol.h"
#include "usb_protocol_hid.h"
#include "uhi.h"

#ifdef __cplusplus
extern "C" {
#endif

#define UHI_HID_KEYBOARD { \
	.install = uhi_hid_keyboard_install, \
	.enable = uhi_hid_keyboard_enable, \
	.uninstall = uhi_hid_keyboard_uninstall, \
	.sof_notify = NULL, \
}

extern uhc_enum_status_t uhi_hid_keyboard_install(uhc_device_t* dev);
extern void uhi_hid_keyboard_enable(uhc_device_t* dev);
extern void uhi_hid_keyboard_uninstall(uhc_device_t* dev);

#ifdef __cplusplus
}
#endif

#endif // _UHI_HID_KEYBOARD_H_
