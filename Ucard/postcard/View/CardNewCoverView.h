//
//  CardNewCoverView.h
//  Ucard
//
//  Created by Conner Wu on 15-4-9.
//  Copyright (c) 2015年 Ucard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CardNewCoverView : UIView

@property (nonatomic, strong) void (^showAlbumBlock) ();
- (void) setTranparent;
@end
