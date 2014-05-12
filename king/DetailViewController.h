//
//  DetailViewController.h
//  king
//
//  Created by User1 on 2014-05-12.
//  Copyright (c) 2014 1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
