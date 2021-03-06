/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSArray;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand  {
}

@property(copy) NSArray * commands;
@property(copy) NSNumber * timeInSeconds;
@property(copy) NSArray * viewIds;

+ (id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)requestUpdateViews;

- (id)groupIdentifier;
- (void)setViewIds:(id)arg1;
- (id)viewIds;
- (void)setTimeInSeconds:(id)arg1;
- (id)timeInSeconds;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setCommands:(id)arg1;
- (id)commands;

@end
