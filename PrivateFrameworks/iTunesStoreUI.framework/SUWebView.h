/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIColor, <SUWebViewDelegate>;

@interface SUWebView : UIWebView  {
    UIColor *_originalBackgroundColor;
    BOOL _originalShowsBackgroundShadow;
    unsigned int _scrollingDisabled : 1;
    BOOL _showsTopBackgroundShadow;
    int _synchronousLayoutCount;
    UIColor *_topBackgroundColor;
}

@property <SUWebViewDelegate> * delegate;
@property(getter=isScrollingEnabled) BOOL scrollingEnabled;
@property(readonly) NSString * title;
@property BOOL showsTopBackgroundShadow;
@property(retain) UIColor * topBackgroundColor;
@property(readonly) id windowScriptObject;


- (void)setTopBackgroundColor:(id)arg1;
- (id)topBackgroundColor;
- (void)setShowsTopBackgroundShadow:(BOOL)arg1;
- (BOOL)showsTopBackgroundShadow;
- (BOOL)isScrollingEnabled;
- (BOOL)getStatusBarStyle:(int*)arg1;
- (void)endSynchronousLayout;
- (void)beginSynchronousLayout;
- (id)windowScriptObject;
- (void)loadArchive:(id)arg1;
- (void)dealloc;
- (void)_setRichTextReaderViewportSettings;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)title;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
