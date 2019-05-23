#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBPreferences.h>
#import "../NSTask.h"

@interface PowerXSRootListController : HBRootListController
- (void)respring;
- (void)share;
- (void)import;


@property(nonatomic, retain) UIBarButtonItem *respringButton;
@end

@interface PowerXSCreditsController : HBRootListController
@end

@interface PowerXSDefSettingsController : HBRootListController
@end

@interface PowerXSModernSettingsController : HBRootListController
@end

@interface PowerXSCustomSettingsController : HBRootListController
@end
