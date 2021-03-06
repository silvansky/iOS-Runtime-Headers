/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, NSString, NSArray;

@interface ABServicePickerViewController : ABPickerViewController <ABSimpleTextInputViewControllerDelegate> {
    NSString *_selectedService;
    NSString *_customService;
    NSArray *_defaultServices;
    NSIndexPath *_selectedIndexPath;
}

@property(copy) NSString * selectedService;
@property(readonly) NSString * selectServiceTitle;
@property(readonly) NSString * addCustomServiceTitle;
@property(readonly) NSString * addCustomServiceButtonLabel;
@property(readonly) NSString * addCustomServicePlaceholder;

+ (id)defaultServices;
+ (id)defaultService;

- (void)dealloc;
- (id)init;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)selectedService;
- (id)addCustomServicePlaceholder;
- (id)addCustomServiceTitle;
- (id)addCustomServiceButtonLabel;
- (id)selectServiceTitle;
- (void)setSelectedService:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;

@end
