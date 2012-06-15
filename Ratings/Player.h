//
//  Player.h
//  Ratings
//
//  Created by Marian PAUL on 23/03/12.
//  Copyright (c) 2012 IPuP SARL. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;
@end
