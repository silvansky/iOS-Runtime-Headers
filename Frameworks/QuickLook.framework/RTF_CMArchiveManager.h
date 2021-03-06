/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableSet, NSMutableDictionary, NSString;

@interface RTF_CMArchiveManager : NSObject  {
    BOOL mIsThumbnail;
    unsigned int mPageCount;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
}

+ (id)hashKeyFor:(id)arg1;
+ (id)resourceTypeToMIME:(int)arg1;
+ (id)resourceTypeToExtension:(int)arg1;

- (id)newResourceWithType:(int)arg1;
- (id)newResourceWithName:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setPageCount:(unsigned int)arg1;
- (unsigned int)pageCount;
- (BOOL)isProgressive;
- (id)appendResourcePathToName:(id)arg1;
- (id)resourcePathPrefix;
- (void)setResourcePathPrefix:(id)arg1;
- (id)cssStylesheetString;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (int)resourceCount;
- (id)cachedPathForDrawable:(id)arg1;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)addResource:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)setIsThumbnail:(BOOL)arg1;
- (BOOL)isThumbnail;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (BOOL)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)setHTMLHeight:(int)arg1;
- (void)setHTMLWidth:(int)arg1;

@end
