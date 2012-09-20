/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTextField, GKSignInHeaderSection, GKSignInButtonSection, GKGame, GKSignInInputSection;

@interface GKSignInDataSource : GKSectionArrayDataSource  {
    GKTextField *_usernameField;
    GKTextField *_passwordField;
    GKSignInButtonSection *_signInButtonSection;
    GKSignInHeaderSection *_signInHeaderSection;
    GKGame *_game;
    GKSignInInputSection *_signInInputSection;
}

@property(retain) GKTextField * usernameField;
@property(retain) GKTextField * passwordField;
@property(retain) GKSignInHeaderSection * signInHeaderSection;
@property(retain) GKSignInButtonSection * signInButtonSection;
@property(retain) GKSignInInputSection * signInInputSection;
@property(retain) GKGame * game;


- (id)signInInputSection;
- (id)signInHeaderSection;
- (id)signInButtonSection;
- (void)updatePlaceholderTextForEnvironment;
- (void)setSignInButtonSection:(id)arg1;
- (void)setSignInInputSection:(id)arg1;
- (void)setSignInHeaderSection:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setUsernameField:(id)arg1;
- (id)usernameField;
- (id)tableView:(id)arg1 sectionAtIndex:(int)arg2;
- (void)prepareSections;
- (void)setGame:(id)arg1;
- (id)game;
- (id)description;
- (void)dealloc;
- (id)passwordField;
- (int)numberOfSectionsInTableView:(id)arg1;

@end