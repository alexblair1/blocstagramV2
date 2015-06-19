//
//  MediaTableViewCell.h
//  Blocstagram2
//
//  Created by Stephen Blair on 6/15/15.
//  Copyright (c) 2015 blairgraphix. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaTableViewCell;

@protocol MediaTableViewDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;

@end


@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, weak) id <MediaTableViewDelegate> delegate;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat) width;

@end
