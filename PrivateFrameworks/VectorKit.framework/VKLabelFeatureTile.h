/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOVectorTile, VKResourcesTile;

@interface VKLabelFeatureTile : VKTile  {
    GEOVectorTile *_modelTile;
    VKResourcesTile *_resourcesTile;
}

@property(readonly) GEOVectorTile * modelTile;
@property(retain) VKResourcesTile * resourcesTile;


- (id)description;
- (void)dealloc;
- (id)resourcesTile;
- (void)setResourcesTile:(id)arg1;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2;
- (id)modelTile;

@end
