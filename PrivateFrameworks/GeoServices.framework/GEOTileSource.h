/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileKeyMap, NSMutableArray, GEOTileKeyList;

@interface GEOTileSource : NSObject  {
    GEOTileKeyMap *_callbackMap;
    GEOTileKeyList *_downloadQueue;
    struct __CFRunLoopObserver { } *_observer;
    BOOL _observing;
    struct { 
        double x; 
        double y; 
    } _downloadSortPoint;
    NSMutableArray *_downloadsInFlight;
    GEOTileKeyList *_failedTiles;
    BOOL _networkReachable;
    unsigned int _queueSize;
    BOOL _log;
}

@property struct { double x1; double x2; } sortPoint;
@property(readonly) unsigned int queueSize;
@property(readonly) GEOTileKeyList * failedTiles;
@property(readonly) int tileSize;
@property(readonly) int zEquivalenceClass;
@property(readonly) int minimumDownloadZoomLevel;
@property(readonly) int maximumDownloadZoomLevel;

+ (id)sharedSource;

- (void)dealloc;
- (id)init;
- (id)dataForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (int)tileSize;
- (void)changeQueueSizeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)fetchDataForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 callback:(id)arg2 allowNetwork:(BOOL)arg3;
- (int)zEquivalenceClass;
- (int)maximumDownloadZoomLevel;
- (void)setSortPoint:(struct { double x1; double x2; })arg1;
- (void)forceDownload;
- (int)minimumDownloadZoomLevel;
- (id)detailedDescription;
- (void)_reachabilityChanged:(id)arg1;
- (id)failedTiles;
- (struct { double x1; double x2; })sortPoint;
- (unsigned int)queueSize;
- (BOOL)canDownloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_download;
- (void)cancelAllFetches;
- (void)_resetFailedTileList;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })tileKeyForX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;

@end
