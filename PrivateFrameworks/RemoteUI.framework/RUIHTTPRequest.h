/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSURLRequest, NSURLConnection, NSMutableData;

@interface RUIHTTPRequest : NSObject <NSURLConnectionDelegate> {
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    BOOL _invalidResponse;
    id _delegate;
}

+ (id)safeBaseURL;
+ (id)nonSecureConnectionNotAllowedError;
+ (id)invalidResponseError;
+ (BOOL)anyRequestLoading;
+ (id)serviceUnavailableError;

- (BOOL)loggingEnabled;
- (void)setDelegate:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)isLoading;
- (id)request;
- (void)loadRequest:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)willParseData;
- (void)_startedLoading;
- (void)loadStatusChanged;
- (BOOL)receivedValidResponse:(id)arg1;
- (void)didParseData;
- (void)parseData:(id)arg1;
- (void)_finishedLoading;

@end
