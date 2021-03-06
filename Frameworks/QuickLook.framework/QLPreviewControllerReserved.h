/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPopOverState, UINavigationController, UIView, NSMutableSet, <QLPreviewItem>, NSString, NSNumberFormatter, MPDetailSlider, NSTimer, UITapGestureRecognizer, UIBarButtonItem, NSMutableDictionary, UILabel, QLProgressView, UISegmentedControl, UIDocumentInteractionController, <QLPreviewControllerDataSource>, MPVolumeView, _UIAsyncInvocation, NSOperation, UIViewController<QLPreviewContentControllerProtocol>, UIImageView, NSURL;

@interface QLPreviewControllerReserved : NSObject  {
    <QLPreviewItem> *previewItem;
    id delegate;
    BOOL blockRemoteImages;
    BOOL useCustomActionButton;
    BOOL showActionAsDefaultButton;
    NSString *loadintTextForMissingFiles;
    int mode;
    int previousMode;
    <QLPreviewControllerDataSource> *dataSource;
    NSMutableDictionary *previewItemCache;
    unsigned int numberOfPreviewItems;
    int currentPreviewItemIndex;
    NSURL *currentPreviewItemURL;
    <QLPreviewItem> *presentedPreviewItem;
    NSMutableSet *preloadedPreviewItems;
    UIViewController<QLPreviewContentControllerProtocol> *previewContentController;
    int barStyle;
    int previousToolbarStyle;
    BOOL translucent;
    BOOL previousToolbarWasTranlucent;
    int previousStatusBarStyle;
    UINavigationController *navigationController;
    NSTimer *overlayTimer;
    int overlayState;
    UISegmentedControl *segmentedArrowControl;
    UIBarButtonItem *arrowsItem;
    UIBarButtonItem *titleItem;
    UIBarButtonItem *actionItem;
    MPDetailSlider *detailSlider;
    UIImageView *navigationBarBackground;
    UIImageView *navigationBarShadow;
    UILabel *scrubSpeedLabel;
    UILabel *scrubInstructionsLabel;
    BOOL scrubbing;
    UIBarButtonItem *indexItem;
    UILabel *indexLabel;
    UIBarButtonItem *pauseButton;
    UIBarButtonItem *routeButton;
    MPVolumeView *volumeView;
    BOOL internalViewsLoaded;
    UIView *mainView;
    UIView *clippingView;
    BOOL clippingViewActive;
    UIView *zoomView;
    UIImageView *iconView;
    UIView *sourceView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } sourceFrame;
    UIView *parentControllerView;
    unsigned int statusBarWasHidden : 1;
    unsigned int toolbarWasHidden : 1;
    unsigned int isZooming : 1;
    unsigned int isZoomingIn : 1;
    unsigned int useZoomAnimation : 1;
    unsigned int useTransitionImage : 1;
    unsigned int hasLoadError : 1;
    unsigned int isDelayingPresentation : 1;
    unsigned int delayedItemIsLoaded : 1;
    QLPopOverState *popOverState;
    NSNumberFormatter *indexFormatter;
    QLProgressView *progressView;
    UITapGestureRecognizer *_tapGestureRegnizer;
    BOOL loadingProgressVisible;
    NSOperation *openOperation;
    UIDocumentInteractionController *interactionController;
    _UIAsyncInvocation *cancelViewServiceRequest;
    NSMutableDictionary *avStateForPreviewItems;
}


- (void)dealloc;
- (id)init;

@end
