/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIImage, UIPDFPageRenderOperation, UIPDFPage;

@interface UIPDFPageRenderJob : NSObject  {
    UIPDFPage *_page;
    unsigned int _pageIndex;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    int _priority;
    UIImage *_image;
    UIPDFPageRenderOperation *_operation;
    id _target;
    SEL _callback;
    id _userData;
    BOOL _sendPending;
    BOOL _releaseWhenDone;
    int _lock;
}

@property(readonly) UIImage * image;
@property UIPDFPageRenderOperation * operation;
@property(readonly) unsigned int pageIndex;
@property(readonly) int priority;
@property BOOL releaseWhenDone;


- (void)setReleaseWhenDone:(BOOL)arg1;
- (BOOL)releaseWhenDone;
- (void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)sendImage;
- (void)renderImage;
- (void)releaseOperation;
- (void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3;
- (void)cancelOperationForTarget:(id)arg1;
- (void)cancelOperation;
- (id)initWithPage:(id)arg1 maxSize:(struct CGSize { float x1; float x2; })arg2 queuePriority:(int)arg3;
- (BOOL)hasPage;
- (void)setOperation:(id)arg1;
- (id)operation;
- (void)cancel;
- (void)dealloc;
- (unsigned int)pageIndex;
- (int)priority;
- (id)image;

@end
