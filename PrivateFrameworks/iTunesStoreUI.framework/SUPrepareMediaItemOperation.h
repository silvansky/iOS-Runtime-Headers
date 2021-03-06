/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation  {
    SUMediaPlayerItem *_mediaItem;
}

@property(readonly) SUMediaPlayerItem * mediaPlayerItem;


- (BOOL)_runHEADRequest:(id*)arg1;
- (id)mediaPlayerItem;
- (id)initWithMediaPlayerItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)run;

@end
