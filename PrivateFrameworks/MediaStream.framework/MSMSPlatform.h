/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSData;

@interface MSMSPlatform : NSObject <MSPlatform> {
    NSData *_developmentPushToken;
    NSData *_productionPushToken;
    BOOL _isPerfLoggingEnabled;
}

@property(readonly) NSData * productionPushToken;
@property(readonly) NSData * developmentPushToken;
@property BOOL isPerfLoggingEnabled;

+ (id)thePlatform;

- (void).cxx_destruct;
- (id)init;
- (void)setIsPerfLoggingEnabled:(BOOL)arg1;
- (BOOL)isPerfLoggingEnabled;
- (id)OSVersion;
- (void)setPushToken:(id)arg1 production:(BOOL)arg2;
- (id)developmentPushToken;
- (id)productionPushToken;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (struct __CFString { }*)_facilityStringForFacility:(int)arg1;
- (void)_rereadDefaults;
- (id)pushTokenForPersonID:(id)arg1;
- (id)UDID;
- (id)OSString;
- (id)hardwareString;
- (BOOL)isPerformanceLoggingEnabled;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(void*)arg7;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(void*)arg4;
- (id)appBundleInfoString;
- (id)authTokenForPersonID:(id)arg1;
- (id)theDaemon;
- (id)socketOptions;
- (id)pathMediaStreamDir;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (BOOL)policyMayDownload;
- (void)didDetectUnrecoverableCondition;
- (BOOL)policyMayUpload;
- (id)baseURLForPersonID:(id)arg1;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (Class)deletePluginClass;
- (Class)sharingPluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;

@end
