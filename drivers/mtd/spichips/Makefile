#
# linux/drivers/spichips/Makefile
#
obj-$(CONFIG_MTD_SPI)		+= spimtd.o spiaccess.o spireg.o generic.o

obj-$(CONFIG_MTD_SPI_ST)   	+= m25pxx.o
obj-$(CONFIG_MTD_SPI_SPANSION) += spansion.o
obj-$(CONFIG_MTD_SPI_MACRONIX) += macronix.o
obj-$(CONFIG_MTD_SPI_AT)   	+= atmel.o
obj-$(CONFIG_MTD_SPI_INTEL_S33) += intels33.o
obj-$(CONFIG_MTD_SPI_WINBOND) += winbond.o
obj-$(CONFIG_MTD_SPI_NUMONYX) += numonyx.o

# The default driver  should be the last in the list of suppported devices
obj-$(CONFIG_MTD_SPI_DEFAULT)   += default.o
