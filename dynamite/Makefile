CFLAGS_dynamite.o := -Wno-unused-variable -Wno-unused-function -Wno-uninitialized -Wno-maybe-uninitialized
obj-m := dynamite.o ../ezusb/

all:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

install:
	@$(foreach file, $(wildcard dynamite.ko), cp -rf $(file) /lib/modules/$(shell uname -r)/kernel/drivers/usb/misc; depmod -a;)
