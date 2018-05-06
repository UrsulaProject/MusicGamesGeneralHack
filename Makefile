ARCHS = armv7 arm64
include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MUGKit
MUGKit_FILES = $(wildcard src/*.xm) $(wildcard lua/*.c)
MUGKit_CFLAGS = -I ./lua -Wno-deprecated-declarations -Wno-unused-function
include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
