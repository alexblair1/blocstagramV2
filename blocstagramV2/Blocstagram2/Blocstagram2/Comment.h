//
//  Comment.h
//  Blocstagram2
//
//  Created by Stephen Blair on 6/15/15.
//  Copyright (c) 2015 blairgraphix. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

- (instancetype) initWithDictionary:(NSDictionary *)commentDictionary;


@end
