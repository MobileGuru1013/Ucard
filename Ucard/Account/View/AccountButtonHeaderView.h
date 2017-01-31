//
//  AccountButtonHeaderView.h
//  Ucard
//
//  Created by Conner Wu on 15/5/7.
//  Copyright (c) 2015年 Ucard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AccountCardButton.h"

@interface AccountButtonHeaderView : UITableViewHeaderFooterView

@property (nonatomic, strong) AccountCardButton *draftButton;
@property (nonatomic, strong) AccountCardButton *sendButton;
@property (nonatomic, strong) AccountCardButton *receiveButton;

@property (nonatomic, strong) void (^draftBlock) ();
@property (nonatomic, strong) void (^sendBlock) ();
@property (nonatomic, strong) void (^receiveBlock) ();

+ (CGFloat)height;

@end
