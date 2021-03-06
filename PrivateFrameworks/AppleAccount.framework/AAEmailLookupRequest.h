/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, AAAccount;

@interface AAEmailLookupRequest : AARequest  {
    AAAccount *_account;
    NSArray *_emailAddresses;
}

@property(retain) AAAccount * account;
@property(retain) NSArray * emailAddresses;

+ (Class)responseClass;

- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (void).cxx_destruct;
- (id)urlString;
- (id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3;
- (id)urlCredential;
- (id)initWithAccount:(id)arg1 emailAddresses:(id)arg2;
- (id)urlRequest;
- (void)setAccount:(id)arg1;
- (id)account;

@end
