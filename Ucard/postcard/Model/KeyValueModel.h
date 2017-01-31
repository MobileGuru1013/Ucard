//
//  KeyValueModel.h
//  Ucard
//
//  Created by Conner Wu on 15/4/27.
//  Copyright (c) 2015年 Ucard. All rights reserved.
//

#import "BaseModel.h"

@interface KeyValueModel : BaseModel

@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *value;
@property (nonatomic, strong) NSString *sel;

@end
