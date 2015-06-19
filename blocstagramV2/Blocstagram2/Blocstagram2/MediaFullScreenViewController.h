//
//  MediaFullScreenViewController.h
//  Blocstagram2
//
//  Created by Stephen Blair on 6/18/15.
//  Copyright (c) 2015 blairgraphix. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end
