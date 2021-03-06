/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class Protocol, AKDispatchQueue;

@interface AKMailbox : NSProxy  {
    id _target;
    Protocol *_publicProtocol;
    Protocol *_privateProtocol;
    AKDispatchQueue *_dispatchQueue;
    union qed_queue_u { } *_queue;
}

@property id target;

+ (id)mailboxWithTarget:(id)arg1 protocol:(id)arg2;

- (void)setTarget:(id)arg1;
- (id)target;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)send;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)dispatchQueue;
- (void)setDispatchQueue:(id)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (BOOL)swapCurrentTarget:(id)arg1 forNewTarget:(id)arg2;
- (void)setPrivateMessages:(id)arg1;

@end
