//
//  DataViewController.h
//  MyPageView
//
//  Created by Juan Antonio Muñoz on 2014-03-12.
//  Copyright (c) 2014 Wulum Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
