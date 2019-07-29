//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CardControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class BaseLoadingView, CardCollectionView, CardTableView, NSMutableArray, NSString, UIColor, UIImage, UIScrollView, UIView, YKJSONClient;

@interface CardsController : UIViewController <UIViewControllerPreviewingDelegate, UITableViewDataSource, UITableViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CardControllerDelegate>
{
    BaseLoadingView *_loadingView;
    UIScrollView *_containerView;
    _Bool _enableCollectionView;
    _Bool _enableNetworkError;
    _Bool _enableTableBottomView;
    _Bool _observeScrollEvent;
    _Bool _enablePreview;
    _Bool _enableExpose;
    UIViewController *_superViewController;
    NSMutableArray *_cardsArray;
    NSMutableArray *_cardControllersArray;
    NSString *_collectionViewClass;
    CardCollectionView *_collectionView;
    NSString *_tableViewClass;
    CardTableView *_tableView;
    YKJSONClient *_jsonClient;
    unsigned long long _refreshType;
    unsigned long long _clearType;
    UIColor *_tableViewTopBgColor;
    UIImage *_tableViewTopImage;
    UIView *_tableBottomCustomView;
    NSString *_pageName;
    id _imageClient;
}

@property(retain, nonatomic) id imageClient; // @synthesize imageClient=_imageClient;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) _Bool enableExpose; // @synthesize enableExpose=_enableExpose;
@property(nonatomic) _Bool enablePreview; // @synthesize enablePreview=_enablePreview;
@property(nonatomic) _Bool observeScrollEvent; // @synthesize observeScrollEvent=_observeScrollEvent;
@property(retain, nonatomic) UIView *tableBottomCustomView; // @synthesize tableBottomCustomView=_tableBottomCustomView;
@property(nonatomic) _Bool enableTableBottomView; // @synthesize enableTableBottomView=_enableTableBottomView;
@property(retain, nonatomic) UIImage *tableViewTopImage; // @synthesize tableViewTopImage=_tableViewTopImage;
@property(retain, nonatomic) UIColor *tableViewTopBgColor; // @synthesize tableViewTopBgColor=_tableViewTopBgColor;
@property(nonatomic) _Bool enableNetworkError; // @synthesize enableNetworkError=_enableNetworkError;
@property(nonatomic) unsigned long long clearType; // @synthesize clearType=_clearType;
@property(nonatomic) unsigned long long refreshType; // @synthesize refreshType=_refreshType;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(readonly, nonatomic) CardTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *tableViewClass; // @synthesize tableViewClass=_tableViewClass;
@property(readonly, nonatomic) CardCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *collectionViewClass; // @synthesize collectionViewClass=_collectionViewClass;
@property(nonatomic) _Bool enableCollectionView; // @synthesize enableCollectionView=_enableCollectionView;
@property(readonly, nonatomic) NSMutableArray *cardControllersArray; // @synthesize cardControllersArray=_cardControllersArray;
@property(readonly, nonatomic) NSMutableArray *cardsArray; // @synthesize cardsArray=_cardsArray;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)cardTableViewCellTapAction:(id)arg1;
- (void)queryExposeRangeOfRect:(struct CGRect)arg1 fromPercent:(long long *)arg2 toPercent:(long long *)arg3;
- (void)queryExposeRangeOfView:(id)arg1 fromPercent:(long long *)arg2 toPercent:(long long *)arg3;
- (void)sendExposeStatisticsWithData:(id)arg1;
- (struct CGRect)exposeFrame;
- (_Bool)exposeMidFrame:(struct CGRect)arg1 p:(struct CGPoint)arg2 u:(id)arg3;
- (void)resetExposeStatistics;
- (void)exposeStatistics;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendScrollEndEventToVisibleCards:(id)arg1 targetIndexPath:(id)arg2;
- (void)sendScrollEventToVisibleCards;
- (void)scrollToCard:(id)arg1 contentIndex:(long long)arg2 position:(unsigned long long)arg3 animated:(_Bool)arg4 params:(id)arg5;
- (void)scrollToIndexPath:(id)arg1 position:(unsigned long long)arg2 animated:(_Bool)arg3 params:(id)arg4;
- (void)scrollToIndexPath:(id)arg1;
- (void)insertCardsWithContexts:(id)arg1 fromIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)insertCardsWithContexts:(id)arg1 fromIndex:(long long)arg2;
- (void)insertCardWithContext:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)insertCardWithContext:(id)arg1 atIndex:(long long)arg2;
- (void)refreshCardWithType:(long long)arg1;
- (void)refreshCardWithType:(long long)arg1 animation:(long long)arg2;
- (void)requestMoreCardsDidFailWithError:(id)arg1;
- (void)requestMoreCardsDidSucceedWithCardsArray:(id)arg1;
- (void)requestMoreData;
- (void)requestCardDataDidFailWithCardContext:(id)arg1 error:(id)arg2;
- (void)requestCardDataDidSucceedWithCardContext:(id)arg1;
- (void)requestCardDataWithController:(id)arg1;
- (void)requestCardsDidFailWithError:(id)arg1;
- (void)requestCardsDidSucceedWithCardsArray:(id)arg1;
- (void)requestCardsWillStart;
- (void)requestCards;
- (id)parseCardControllersWithCardsArray:(id)arg1;
- (id)queryCardControllersWithType:(long long)arg1;
- (_Bool)supportCollectionViewAtIndexPath:(id)arg1;
- (void)reuseTableViewCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableViewCellAtIndexPath:(id)arg1;
- (Class)cellClassAtIndexPath:(id)arg1;
- (id)reuseIdentifierAtIndexPath:(id)arg1;
- (_Bool)isValidCardContent:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)isCardFooter:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)isCardHeader:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)isCardSpacing:(id)arg1 atIndexPath:(id)arg2;
- (id)cardControllerAtIndex:(long long)arg1;
- (void)touchErrorViewAction;
- (void)receiveCardsSuperViewDidDisappearNotification:(id)arg1;
- (void)receiveCardsSuperViewWillAppearNotification:(id)arg1;
- (void)cards_viewDidDisappear:(_Bool)arg1;
- (void)cards_viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)setupTopImage:(id)arg1;
- (void)deleteCardWithContext:(id)arg1;
- (void)deleteSectionWithType:(long long)arg1 withIndex:(unsigned long long)arg2 withAnimation:(long long)arg3;
- (void)deleteCardWithCardContext:(id)arg1;
- (void)addSectionWithType:(long long)arg1 withCardContext:(id)arg2 withcardController:(id)arg3 withIndex:(unsigned long long)arg4 withAnimation:(long long)arg5;
- (void)insertCardWithCardContext:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)scrollToCardType:(long long)arg1;
- (void)didFinishLoadAllData;
- (void)finishInfiniteScrollingAction;
- (void)triggerInfiniteScrollingAction;
- (void)refreshTableBottomView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
