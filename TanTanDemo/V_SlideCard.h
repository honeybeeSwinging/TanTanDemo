//
//  V_SlideCard.h
//  TanTanDemo
//
//  Created by zhujiamin on 2016/11/16.
//  Copyright © 2016年 zhujiamin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "V_SlideCardCell.h"
#import "M_CardFrame.h"

@protocol V_SlideCardDataSource;

@interface V_SlideCard : UIView

@property (nonatomic, strong) NSMutableArray<M_CardFrame *> *frameArray;
@property (nonatomic, weak)   id<V_SlideCardDataSource>     dataSource;

- (void)reloadDataWithUnderCell:(V_SlideCardCell *)cell;
- (void)reloadData;

@end

@protocol V_SlideCardDataSource<NSObject>

- (M_SlideCard *)slideCard:(V_SlideCard *)slideCard itemForIndex:(NSInteger)index;//should must be overrided

@optional
- (NSInteger)numberOfItemsInSlideCard:(V_SlideCard *)slideCard;//default is 3;
- (CGFloat)slideCard:(V_SlideCard *)slideCard heightForItemAtIndex:(NSInteger )index;//default is 'self.height - 180'
- (CGFloat)slideCard:(V_SlideCard *)slideCard widthForItemAtIndex:(NSInteger )index;//default is 'self.width - 28'

@end