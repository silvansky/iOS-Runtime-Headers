/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL, NSString;

@interface NSFileWatcherObservations : NSObject  {
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetURL;
    NSURL *_url;
}


- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (void)notifyObserver:(id)arg1;
- (void)addMoveToURL:(id)arg1;
- (void)addMoveToPath:(id)arg1;
- (void)addDeletion;
- (void)addContentsChange;
- (void)addAttributeChange;

@end
