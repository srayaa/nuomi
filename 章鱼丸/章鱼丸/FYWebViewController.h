//
//  FYWebViewController.h
//  章鱼丸
//
//  Created by 寿煜宇 on 16/3/13.
//  Copyright © 2016年 Fyus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <webkit/webkit.h>

@interface FYWebViewController : UIViewController

@property (nonatomic) NSURL *URL;

@property (strong, nonatomic) NSString *name;
@property (nonatomic) BOOL LED;

@end
