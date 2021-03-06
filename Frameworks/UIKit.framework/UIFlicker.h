/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIFlicker : NSObject  {
    UIView *_target;
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    int _throwIterations;
    id _delegate;
    int _mouseUpCount;
    int _mouseDraggedCount;
    float _delay;
    struct CGPoint { 
        float x; 
        float y; 
    } _offset;
}


- (void)setDelegate:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)init;
- (void)run;
- (void)setDelay:(float)arg1;
- (void)setStartLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_throwMemberListTest;
- (void)_mouseUpMemberListTest;
- (void)_mouseDraggedMemberListTest;
- (void)setIterations:(int)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;

@end
