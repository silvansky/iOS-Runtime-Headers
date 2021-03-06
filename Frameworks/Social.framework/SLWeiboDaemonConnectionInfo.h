/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface SLWeiboDaemonConnectionInfo : NSObject  {
    id _daemonSessionProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_xpc_object> *_connection;
}

@property id daemonSessionProxy;
@property(retain) NSObject<OS_dispatch_queue> * connectionQueue;
@property(retain) NSObject<OS_xpc_object> * connection;


- (void).cxx_destruct;
- (id)connectionQueue;
- (void)setConnectionQueue:(id)arg1;
- (id)connection;
- (void)setDaemonSessionProxy:(id)arg1;
- (id)daemonSessionProxy;
- (void)setConnection:(id)arg1;

@end
