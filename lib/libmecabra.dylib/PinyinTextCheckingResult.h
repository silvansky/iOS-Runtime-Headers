/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSMutableDictionary, NSString, NSArray;

@interface PinyinTextCheckingResult : NSObject  {
    NSString *_pinyin;
    NSArray *_filteredAlternatives;
    NSArray *_alternativesWithNonPinyinRanges;
    NSMutableDictionary *_syllabifications;
    NSMutableDictionary *_checkedRangesForAlternatives;
}

@property(readonly) NSArray * filteredAlternatives;
@property(readonly) NSArray * alternativesWithNonPinyinRanges;


- (id)initWithString:(id)arg1;
- (void)dealloc;
- (id)copyNonPinyinPrefixes:(BOOL)arg1;
- (id)alternativesWithNonPinyinRanges;
- (id)filteredAlternatives;
- (struct _NSRange { unsigned int x1; unsigned int x2; })checkedRangeForAlternative:(id)arg1;
- (id)syllablesForPinyin:(id)arg1;
- (void)loadAlternatives;

@end