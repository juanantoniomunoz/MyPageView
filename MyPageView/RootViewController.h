//
//  RootViewController.h
//  MyPageView
//
//  Created by Juan Antonio Muñoz on 2014-03-12.
//  Copyright (c) 2014 Wulum Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
