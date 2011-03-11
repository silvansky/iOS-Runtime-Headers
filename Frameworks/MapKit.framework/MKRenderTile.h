/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray, NSArray;

@interface MKRenderTile : NSObject  {
    int _imageCopyrightYear;
    int _dataCopyrightYear;
    NSMutableArray *_dataCopyrights;
    NSMutableArray *_imageCopyrights;
    id _renderObject;
}

@property(readonly) NSArray * imageCopyrights;
@property(readonly) NSArray * dataCopyrights;
@property(retain) id renderObject;
@property int dataCopyrightYear;
@property int imageCopyrightYear;

+ (void)initialize;

- (void)dealloc;
- (void)setRenderObject:(id)arg1;
- (void)setDataCopyrightYear:(int)arg1;
- (void)setImageCopyrightYear:(int)arg1;
- (id)initWithRenderObject:(id)arg1 mapTileInfo:(id)arg2;
- (id)renderObject;
- (id)dataCopyrights;
- (id)imageCopyrights;
- (int)dataCopyrightYear;
- (int)imageCopyrightYear;

@end