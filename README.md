# ATSAMD21-USB-HOST-HID-KEYBOARD-CLASS
USB Host HID Keyboard Class for AT SAM D21 microcontroller.

Rough list of steps to build:

In Atmel Studio 7.0, create a new USB Host HID Mouse example project targeting the ATSAMD21 microcontroller.

In the created project, add a keyboard folder under src->ASF->common->services->usb->clas->hid->host.

Copy uhi_hid_keyboard.h and uhi_hid_keyboard.c to that folder using the file system.

In the project, select add existing item and add both files to the keyboard folder you created above.

Right click on the project and select properties. Click Toolchain then click ARM/GNU C Compiler -> Directores and add "../src/ASF/common/services/usb/class/hid/host/keyboard" to the list of include paths.

Do a global search for #include "uhi_hid_mouse.h" and add a #include "uhi_hid_keyboard.h" below every mouse include except for in uhi_hid_mouse.c and uhi_hid_mouse.h.

In conf_usb_host.h, change 

#define USB_HOST_UHI        UHI_HID_MOUSE

to 

#define USB_HOST_UHI        UHI_HID_MOUSE,UHI_HID_KEYBOARD

In the same file, add

#define UHI_HID_KEYBOARD_CHANGE(dev,b_plug)

down below the similar defintions for the mouse.

The new project won't include the serial STDIO stuff for using printf. If you wish to keep the existing printf inside usb_hid_keyboard.c, add the requisite serial STDIO stuff to the project. Otherwise, change the printf to do whatever you want to do with key press and key release events in your application.

Have fun!
