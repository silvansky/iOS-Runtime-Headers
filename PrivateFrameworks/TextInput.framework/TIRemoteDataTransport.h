/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCConnection, NSData, NSObject<OS_dispatch_queue>;

@interface TIRemoteDataTransport : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_connection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _readyCallback;

    void *_mem;
    unsigned long _memSize;
}

@property(readonly) NSData * data;

+ (void)userDictionaryLoad;
+ (void)setDataSource:(id)arg1 forRequestType:(id)arg2;
+ (void)setUserDictionaryServer:(id)arg1;
+ (void)userDictionarySaveChanges;
+ (void)postRequest:(id)arg1 handler:(id)arg2;

- (id)initWithPurpose:(id)arg1 ready:(id)arg2;
- (void)_loadDescriptor:(int)arg1;
- (oneway void)postRequestForPurpose:(id)arg1;
- (id)data;
- (void)dealloc;

@end
