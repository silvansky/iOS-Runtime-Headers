/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUTableDataSource, NSArray;

@interface SUDownloadsTableViewController : SUTableViewController <SUDownloadsChildViewController> {
}

@property(retain) SUTableDataSource * dataSource;
@property(retain) NSArray * scriptButtons;


- (id)_downloadsViewController;
- (id)visibleDownloadCellForDownload:(id)arg1;
- (void)reloadDownloadCellForDownload:(id)arg1;
- (void)setScriptButtons:(id)arg1;
- (id)scriptButtons;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (BOOL)deleteRowAtIndexPath:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;

@end
