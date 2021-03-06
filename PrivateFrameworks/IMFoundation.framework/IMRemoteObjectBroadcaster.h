/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSObject<OS_dispatch_queue>;

@interface IMRemoteObjectBroadcaster : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultBroadcaster;

- (void)dealloc;
- (id)init;
- (BOOL)isSendQueueEmpty;
- (id)broadcastProxyForTarget:(id)arg1 protocol:(id)arg2;
- (id)_queue;
- (void)flushProxy:(id)arg1;
- (id)broadcastProxyForTargets:(id)arg1 protocol:(id)arg2;

@end
