/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray, UIBarButtonItem, UIWindow;



@interface UIDimmingView : UIView 
{
    id _delegate;
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    NSArray *_passthroughViews;
    BOOL _ignoresTouches;
    BOOL _displayed;
    BOOL _inPassthroughHitTest;
    BOOL _dimsStatusBar;
    UIWindow *_statusBarDimmingWindow;
}

@property(retain) UIBarButtonItem *highlightedBarButtonItem;
@property BOOL displayed;
@property BOOL ignoresTouches;
@property BOOL dimsStatusBar;
@property(retain) NSArray *passthroughViews;
@property id delegate;

+ (void)_initializeSafeCategory;

- (void)dimmingRemovalAnimationDidStop;
- (void)setHighlightedBarButtonItem:(id)arg1;
- (id)highlightedBarButtonItem;
- (void)setDisplayed:(BOOL)arg1;
- (BOOL)ignoresTouches;
- (BOOL)dimsStatusBar;
- (void)setDimsStatusBar:(BOOL)arg1;
- (id)passthroughViews;
- (void)setPassthroughViews:(id)arg1;
- (void)display:(BOOL)arg1 withAnimationDuration:(float)arg2 afterDelay:(float)arg3;
- (BOOL)displayed;
- (void)setIgnoresTouches:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)_accessibilityCoversScreen;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (void)accessibilityActivate;
- (BOOL)_accessibilityEscape;
- (BOOL)_accessibilityObscuresScreen;

@end