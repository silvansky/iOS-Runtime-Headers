/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface AccountsManager : NSObject  {
    NSMutableDictionary *_topLevelAccountsByID;
    NSMutableArray *_orderedTopLevelAccounts;
    NSMutableDictionary *_childAccountsByID;
    NSMutableDictionary *_childAccountIDToParentAccountID;
    NSMutableDictionary *_originalAccountsByID;
    unsigned int _dataVersion;
    NSArray *_runtimeFixers;
}

+ (void)accountDidChange:(id)arg1 forDataclass:(id)arg2;
+ (void)accountWillChange:(id)arg1 forDataclass:(id)arg2;
+ (void)waitForMigrationToFinish;
+ (unsigned int)currentVersion;
+ (BOOL)accountSettingsNeedsToBeMigrated;
+ (BOOL)_oldDAAccountsInformationFound;
+ (BOOL)_oldMailAccountsInformationFound;
+ (id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (void)_migrateAccountsIfNeeded;
+ (id)_notifierClassNamesForAccountType:(id)arg1 dataclass:(id)arg2;
+ (id)fullPathToAccountSettingsPlist;
+ (void)releaseMigrationLock:(id)arg1;
+ (void)killDataAccessIfNecessary;
+ (void)removeNewAccountSettingsToMigrateOldAccountInformation;
+ (id)createAndLockMigrationLock;
+ (void)shouldMigrateOldMailAccounts:(BOOL*)arg1 oldDAAccounts:(BOOL*)arg2 newAccountSettings:(BOOL*)arg3;
+ (void)_setShouldSkipNotifications:(BOOL)arg1;

- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (void)setDataVersion:(unsigned int)arg1;
- (unsigned int)dataVersion;
- (id)initWithAccounsInfoArray:(id)arg1;
- (unsigned int)countOfBasicAccountsWithTypes:(id)arg1;
- (id)_initWithAccountsInfo:(id)arg1;
- (void)replaceAccount:(id)arg1 withAccount:(id)arg2;
- (void)insertAccount:(id)arg1;
- (id)allMailAccounts;
- (id)basicAccountsWithTypes:(id)arg1;
- (void)_addNotificationToDictionary:(id)arg1 forChangeType:(int)arg2 originalProperties:(id)arg3 currentProperties:(id)arg4;
- (id)_createRuntimeFixers;
- (void)_setOriginalAccountDictionaries;
- (void)_sendNotificationsForChangedAccounts;
- (id)mergeInMemoryProperties:(id)arg1 originalProperties:(id)arg2 onDiskProperties:(id)arg3;
- (void)_removeChildrenForAccountWithIdentifier:(id)arg1;
- (id)initInsideOfMigration;
- (void)_loadChildrenFromAccount:(id)arg1;
- (void)addChild:(id)arg1 toAccount:(id)arg2;
- (void)removeChildWithIdentifier:(id)arg1 fromAccount:(id)arg2;
- (id)allBasicSyncableAccounts;
- (id)displayAccountWithSyncIdentifier:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (void)saveAllAccounts;
- (void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2;
- (id)accountsWithTypes:(id)arg1 withLoader:(id)arg2;
- (id)accountsWithTypes:(id)arg1;
- (id)fullDeviceLocalAccount;
- (id)allBasicAccounts;
- (void)updateAccount:(id)arg1;
- (id)syncableAccountWithSyncIdentifier:(id)arg1;
- (id)fullAccountWithIdentifier:(id)arg1 loader:(id)arg2;
- (void)setLegacyAccounts:(id)arg1 withPasswords:(id)arg2;
- (id)legacyAccounts;
- (BOOL)hasActiveDAMMeAccounts;
- (BOOL)hasActiveIMAPNotesAccounts;
- (BOOL)hasActiveCalDAVChildAccounts;
- (BOOL)hasActiveCardDAVChildAccounts;
- (BOOL)hasActiveBookmarkDAVChildAccounts;

@end
