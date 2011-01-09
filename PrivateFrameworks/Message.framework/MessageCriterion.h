/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSArray;



@interface MessageCriterion : NSObject 
{
    NSString *_uniqueId;
    NSString *_criterionIdentifier;
    NSString *_expression;
    NSInteger _qualifier;
    NSArray *_criteria;
    NSInteger _dateUnitType;
    NSString *_name;
    unsigned int _allCriteriaMustBeSatisfied : 1;
    unsigned int _dateIsRelative : 1;
    NSInteger _type;
    NSArray *_requiredHeaders;
}

+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (void)_updateAddressComments:(id)arg1;
+ (NSInteger)criterionTypeForString:(id)arg1;
+ (id)stringForCriterionType:(NSInteger)arg1;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;
+ (id)messageIsServerSearchResultCriterion:(BOOL)arg1;
+ (id)criterionForMailboxURL:(id)arg1;

- (id)_criterionForSQLWithAddressBook:(void*)arg1;
- (id)criterionForSQLWithAddressBook:(void*)arg1;
- (id)SQLExpressionWithTables:(NSUInteger*)arg1 baseTable:(NSUInteger)arg2;
- (NSUInteger)bestBaseTable;
- (BOOL)includesCriterionSatisfyingPredicate:(int (*)())arg1 restrictive:(BOOL)arg2;
- (id)criterionByExpandingAddressCriteriaWithAddressBook:(void*)arg1;
- (id)fixOnceWithAddressBook:(void*)arg1;
- (id)SQLExpressionWithContext:(struct { NSUInteger x1; NSUInteger x2; BOOL x3; BOOL x4; }*)arg1 depth:(NSUInteger)arg2;
- (BOOL)hasNumberCriterion;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (id)descriptionWithDepth:(NSUInteger)arg1;
- (void)setCriterionType:(NSInteger)arg1;
- (id)criterionIdentifier;
- (id)_qualifierString;
- (NSInteger)qualifier;
- (void)setQualifier:(NSInteger)arg1;
- (void)setExpression:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (NSInteger)messageRuleQualifierForString:(id)arg1;
- (id)stringForMessageRuleQualifier:(NSInteger)arg1;
- (id)criteria;
- (NSInteger)dateUnits;
- (void)setDateUnits:(NSInteger)arg1;
- (BOOL)dateIsRelative;
- (void)setDateIsRelative:(BOOL)arg1;
- (id)simplifyOnce;
- (id)simplifiedCriterion;
- (id)emailAddressesForGroupCriterion;
- (void)setCriteria:(id)arg1;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (id)initWithType:(NSInteger)arg1 qualifier:(NSInteger)arg2 expression:(id)arg3;
- (void)setCriterionIdentifier:(id)arg1;
- (NSInteger)criterionType;
- (id)expression;
- (BOOL)allCriteriaMustBeSatisfied;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end