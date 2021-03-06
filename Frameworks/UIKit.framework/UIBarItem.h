/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIImage;

@interface UIBarItem : NSObject <UIAppearance> {
    BOOL _hasCustomizableInstanceAppearanceModifications;
    BOOL _shouldArchiveUIAppearanceTags;
}

@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString * title;
@property(retain) UIImage * image;
@property(retain) UIImage * landscapeImagePhone;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } landscapeImagePhoneInsets;
@property int tag;
@property(setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications;
@property(setter=_setShouldArchiveUIAppearanceTags:) BOOL _shouldArchiveUIAppearanceTags;

+ (id)_appearanceProxyViewClasses;
+ (id)_appearanceRecorderWhenContainedIn:(Class)arg1;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)_appearanceRecorder;
+ (id)appearance;
+ (id)_appearanceWhenContainedIn:(id)arg1;

- (void)_setHasCustomizableInstanceAppearanceModifications:(BOOL)arg1;
- (BOOL)_hasCustomizableInstanceAppearanceModifications;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setShouldArchiveUIAppearanceTags:(BOOL)arg1;
- (BOOL)_shouldArchiveUIAppearanceTags;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
