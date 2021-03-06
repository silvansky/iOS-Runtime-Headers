/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSDictionary;

@interface GKAchievementDescriptionInternal : GKInternalRepresentation  {
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_achievedDescription;
    NSString *_unachievedDescription;
    unsigned int _maximumPoints;
    BOOL _hidden;
    NSDictionary *_icons;
    BOOL _replayable;
}

@property(retain) NSString * identifier;
@property(retain) NSString * groupIdentifier;
@property(retain) NSString * title;
@property(retain) NSString * achievedDescription;
@property(retain) NSString * unachievedDescription;
@property unsigned int maximumPoints;
@property(getter=isHidden) BOOL hidden;
@property(retain) NSDictionary * icons;
@property(getter=isReplayable) BOOL replayable;

+ (id)codedPropertyKeys;

- (void)setReplayable:(BOOL)arg1;
- (BOOL)isReplayable;
- (void)setMaximumPoints:(unsigned int)arg1;
- (void)setUnachievedDescription:(id)arg1;
- (void)setAchievedDescription:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (id)groupIdentifier;
- (id)unachievedDescription;
- (id)achievedDescription;
- (unsigned int)maximumPoints;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)icons;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;

@end
