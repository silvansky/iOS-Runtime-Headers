/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class UIFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo  {
    UIFont *_font;
    unsigned int _glyph;
}

+ (void)initialize;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;

- (id)description;
- (void)dealloc;
- (id)_font;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)_glyph;
- (id)initWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;

@end
