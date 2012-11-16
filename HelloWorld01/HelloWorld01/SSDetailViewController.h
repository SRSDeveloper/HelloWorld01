//
//  SSDetailViewController.h
//  HelloWorld01
//
//  Created by David Putter on 16/11/2012.
//  Copyright (c) 2012 Stratex Systems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
