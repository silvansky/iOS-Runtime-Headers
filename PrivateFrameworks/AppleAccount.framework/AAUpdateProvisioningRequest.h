/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest  {
    AAAccount *_account;
}

@property(retain) AAAccount * account;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)urlCredential;
- (id)urlRequest;
- (void)setAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)account;

@end
