/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface _UIAlertManager : NSObject 
{
}

+ (BOOL)cancelTopMostAlertAnimated:(BOOL)arg1;
+ (BOOL)cancelAlertsAnimated:(BOOL)arg1;
+ (void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1 deferDisplay:(BOOL)arg2;
+ (void)reorientAlertWindowTo:(NSInteger)arg1 animated:(BOOL)arg2 keyboard:(id)arg3;
+ (void)tellSpringboardShowingAlert:(id)arg1 animated:(BOOL)arg2;
+ (BOOL)hideTopMostAlertAnimated:(BOOL)arg1;
+ (BOOL)stackContainsAlert:(id)arg1;
+ (void)tellSpringboardHidingAlert:(id)arg1 animated:(BOOL)arg2;
+ (void)sizeAlertWindowForCurrentOrientation;
+ (void)addToStack:(id)arg1 dontDimBackground:(BOOL)arg2;
+ (void)createAlertWindowIfNeeded:(BOOL)arg1;
+ (void)removeFromStack:(id)arg1;
+ (id)topMostAlert;
+ (id)visibleAlert;
+ (void)hideTopmostMiniAlert:(NSInteger)arg1;
+ (void)showTopmostMiniAlert;
+ (void)noteOrientationChangingTo:(NSInteger)arg1;
+ (void)initialize;
+ (void)hideAlertsForTermination;


@end