/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSArray, NSString, NSDictionary;

@interface NSEntityStoreMapping : NSStoreMapping  {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}


- (id)entity;
- (void)setEntity:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)createTableStatement;
- (id)initWithEntity:(id)arg1;
- (id)foreignKeyConstraintDefinitions;
- (id)foreignKeyColumnDefinitions;
- (id)attributeColumnDefinitions;
- (id)primaryKeyColumnDefinitions;
- (unsigned int)subentityID;
- (id)subentityColumn;
- (BOOL)isSingleTableEntity;
- (id)primaryKeys;
- (id)propertyMappings;
- (void)setSubentityID:(unsigned int)arg1;
- (void)setSubentityColumn:(id)arg1;
- (void)setSingleTableEntity:(BOOL)arg1;
- (void)setPrimaryKeys:(id)arg1;
- (void)setPropertyMappings:(id)arg1;
- (id)relationshipMappings;
- (id)attributeMappings;

@end
