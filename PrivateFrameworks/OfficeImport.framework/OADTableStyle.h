/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTablePartStyle, NSString, OADTableBackground;

@interface OADTableStyle : NSObject  {
    NSString *mName;
    NSString *mId;
    OADTableBackground *mBackground;
    OADTablePartStyle *mWholeTableStyle;
    OADTablePartStyle *mBand1HorzStyle;
    OADTablePartStyle *mBand2HorzStyle;
    OADTablePartStyle *mBand1VertStyle;
    OADTablePartStyle *mBand2VertStyle;
    OADTablePartStyle *mFirstRowStyle;
    OADTablePartStyle *mFirstColumnStyle;
    OADTablePartStyle *mLastRowStyle;
    OADTablePartStyle *mLastColumnStyle;
    OADTablePartStyle *mNorthEastStyle;
    OADTablePartStyle *mNorthWestStyle;
    OADTablePartStyle *mSouthEastStyle;
    OADTablePartStyle *mSouthWestStyle;
}


- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)background;
- (void)setBackground:(id)arg1;
- (void)setSouthWestStyle:(id)arg1;
- (void)setSouthEastStyle:(id)arg1;
- (void)setNorthWestStyle:(id)arg1;
- (void)setNorthEastStyle:(id)arg1;
- (void)setLastColumnStyle:(id)arg1;
- (void)setLastRowStyle:(id)arg1;
- (void)setFirstColumnStyle:(id)arg1;
- (void)setFirstRowStyle:(id)arg1;
- (void)setBand2VertStyle:(id)arg1;
- (void)setBand1VertStyle:(id)arg1;
- (void)setBand2HorzStyle:(id)arg1;
- (void)setBand1HorzStyle:(id)arg1;
- (void)setWholeTableStyle:(id)arg1;
- (id)partStyle:(int)arg1;
- (id)southEastStyle;
- (id)southWestStyle;
- (id)northEastStyle;
- (id)northWestStyle;
- (id)lastColumnStyle;
- (id)firstColumnStyle;
- (id)band2VertStyle;
- (id)band1VertStyle;
- (id)band2HorzStyle;
- (void)setId:(id)arg1;
- (id)lastRowStyle;
- (id)band1HorzStyle;
- (id)wholeTableStyle;
- (id)firstRowStyle;
- (id)id;

@end
