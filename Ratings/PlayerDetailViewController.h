//
//  PlayerDetailViewController.h
//  Ratings
//
//  Created by Marian PAUL on 23/03/12.
//  Copyright (c) 2012 IPuP SARL. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PlayerDetailViewController;

@protocol PlayerDetailViewControllerDelegate <NSObject>
- (void)playerDetailViewControllerDidCancel:
(PlayerDetailViewController *)controller;
- (void)playerDetailViewControllerDidSave:
(PlayerDetailViewController *)controller;
@end

@interface PlayerDetailViewController : UITableViewController
@property (nonatomic, weak) id <PlayerDetailViewControllerDelegate> delegate;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;
@end
