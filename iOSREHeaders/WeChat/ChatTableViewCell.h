//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 16 2019 10:33:12).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiSelectTableViewCell.h"

@class BaseChatCellView;

@interface ChatTableViewCell : MultiSelectTableViewCell
{
    BaseChatCellView *m_cellView;
    _Bool m_willBeDisplayed;
    _Bool m_didEndDisplayed;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BaseChatCellView *cellView; // @synthesize cellView=m_cellView;
- (void)didEndDisplayed;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)willBeDisplayed;

@end
