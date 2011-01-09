/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class SPSearchQuery, <SPDaemonQueryDelegate>;



@interface SPDaemonQueryToken : NSObject 
{
    struct __CFMachPort { } *_callbackPort;
    SPSearchQuery *_query;
    <SPDaemonQueryDelegate> *_delegate;
    NSUInteger _queryID;
    NSUInteger _sortsInFlight;
    BOOL _completed;
}

@property BOOL completed;
@property NSUInteger sortsInFlight;
@property(readonly) SPSearchQuery *query;
@property(readonly) NSUInteger queryID;
@property <SPDaemonQueryDelegate> *delegate;


- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (id)query;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_callbackPipeBrokenCallback:(struct __CFMachPort { }*)arg1;
- (void)_sendResults:(id)arg1;
- (void)_sendCompletion;
- (NSUInteger)sortsInFlight;
- (void)setSortsInFlight:(NSUInteger)arg1;
- (id)initWithQuery:(id)arg1 andCallbackPort:(NSUInteger)arg2;
- (NSUInteger)queryID;
- (void)_sendError:(id)arg1;

@end