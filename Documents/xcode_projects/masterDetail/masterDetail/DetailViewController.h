//
//  DetailViewController.h
//  masterDetail
//
//  Created by Roland on 7.12.2013.
//  Copyright (c) 2013 com.Roland. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
