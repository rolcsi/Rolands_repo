//
//  MasterViewController.h
//  masterDetail
//
//  Created by Roland on 7.12.2013.
//  Copyright (c) 2013 com.Roland. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
