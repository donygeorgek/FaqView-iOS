//
//  ViewController.h
//  FaqView
//
//  Created by IRSHAD PC on 21/01/17.
//  Copyright © 2017 IRSHAD PC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FAQViewController : UIViewController

@property (nonatomic, weak, readonly) UITableView *tableView;
@property (strong, nonatomic) NSMutableArray *faqArray;
@end

