//
//  SendDetailHeaderView.h
//  Ucard
//
//  Created by Conner Wu on 15/5/9.
//  Copyright (c) 2015年 Ucard. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SendDetailModel.h"

@interface SendDetailHeaderView : UITableViewHeaderFooterView

+ (CGFloat)height;
- (void)setContent:(SendDetailModel *)cardModel;

@end
