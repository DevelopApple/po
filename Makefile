include $(THEOS)/makefiles/common.mk

ARCHS = arm64 arm64e armv7
THEOS_DEVICE_IP = 10.0.0.9

TWEAK_NAME = PowerXS
PowerXS_FILES = Tweak.xm
PowerXS_LIBRARIES = colorpicker
PowerXS_EXTRA_FRAMEWORKS = Cephei

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
SUBPROJECTS += prefs
include $(THEOS_MAKE_PATH)/aggregate.mk
