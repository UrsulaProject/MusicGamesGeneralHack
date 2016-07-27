include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MUGKit
MUGKit_FILES = Tweak.xm CxB.xm Jubeat.xm RB.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"