include theos/makefiles/common.mk
TWEAK_NAME = MusicGamesGeneralHackGamma
MusicGamesGeneralHackGamma_FILES = TweakGamma.xm
MusicGamesGeneralHackGamma_FRAMEWORKS = UIKit
include $(THEOS_MAKE_PATH)/tweak.mk
after-install::
	install.exec "killall -9 SpringBoard"
