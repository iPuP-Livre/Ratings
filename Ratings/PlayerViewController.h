//
//  PlayerViewController.h
//  Ratings
//
//  Created by Marian PAUL on 23/03/12.
//  Copyright (c) 2012 IPuP SARL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailViewController.h"

@interface PlayerViewController : UITableViewController <PlayerDetailViewControllerDelegate>
@property (nonatomic, retain) NSMutableArray *players;
@end
