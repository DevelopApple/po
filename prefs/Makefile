
include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = PowerXSPrefs
PowerXSPrefs_FILES = *.m
PowerXSPrefs_INSTALL_PATH = /Library/PreferenceBundles
PowerXSPrefs_FRAMEWORKS = UIKit
PowerXSPrefs_LIBRARIES = colorpicker
PowerXSPrefs_PRIVATE_FRAMEWORKS = Preferences
PowerXSPrefs_EXTRA_FRAMEWORKS = Cephei CepheiPrefs
ARCHS = arm64 arm64e armv7

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/PowerXSPrefs.plist$(ECHO_END)
