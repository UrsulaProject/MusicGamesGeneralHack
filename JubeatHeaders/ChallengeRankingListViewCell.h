//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface ChallengeRankingListViewCell : UITableViewCell
{
    UIImageView *bgImage;
    UILabel *nameLabel;
    UILabel *rankLabel;
    UILabel *scoreLabel;
    UIImageView *iconImageView;
    UIImageView *iconNumImageView[2];
    id _aDelegate;
}

@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (void)setRivalIcon:(id)arg1 digit1Image:(id)arg2 digit2Image:(id)arg3;
- (void)setRivalInfo:(id)arg1 rank:(id)arg2 name:(id)arg3 score:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
