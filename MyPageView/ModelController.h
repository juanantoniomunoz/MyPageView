//
//  ModelController.h
//  MyPageView
//
//  Created by Juan Antonio Muñoz on 2014-03-12.
//  Copyright (c) 2014 Wulum Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
