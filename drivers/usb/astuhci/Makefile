#
# Makefile for USB Host Controller Drivers
#

ifeq ($(CONFIG_USB_DEBUG),y)
	EXTRA_CFLAGS		+= -DDEBUG
endif


obj-$(CONFIG_AST_USB_UHCI_HCD)	+= uhci-hcd.o
