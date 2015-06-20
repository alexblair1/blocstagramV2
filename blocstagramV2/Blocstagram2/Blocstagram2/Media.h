//
//  Media.h
//  Blocstagram2
//
//  Created by Stephen Blair on 6/15/15.
//  Copyright (c) 2015 blairgraphix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LikeButton.h"

//why did we use the forward declaration @class and not #import? we could but it's generally poor practice to import custom classes inside a head file. tHe reason for this is that we can get into trouble with what's called a circular inclusion.
//circular inclusion happens when two classes try to import each other. When this happens we get a compiler error. A circular inclusion can also happen indirectly: class a imports classb which imports class c which imports class d which imports class a-this would cause a circular inclusion errror. For now, understand that we are in the header file, and we shouldn't use #import here, use @class instead. 

typedef NS_ENUM(NSInteger, MediaDownloadState) {
    MediaDownloadStateNeedsImage             = 0,
    MediaDownloadStateDownloadInProgress     = 1,
    MediaDownloadStateNonRecoverableError    = 2,
    MediaDownloadStateHasImage               = 3
};

@class User;

@interface Media : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, assign) MediaDownloadState downloadState;

@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

@property (nonatomic, assign) LikeState likeState;

- (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;

@end