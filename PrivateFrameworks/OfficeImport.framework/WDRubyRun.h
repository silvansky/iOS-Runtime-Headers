/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDRubyProperties, WDCharacterRun;

@interface WDRubyRun : WDCharacterRun  {
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}


- (void)dealloc;
- (id)rubyBase;
- (void)appendPhoneticRunString:(id)arg1;
- (void)setPhoneticRunString:(id)arg1;
- (id)phoneticRunString;
- (id)phoneticRun;
- (id)rubyProperties;
- (id)initWithParagraph:(id)arg1;
- (int)runType;

@end
