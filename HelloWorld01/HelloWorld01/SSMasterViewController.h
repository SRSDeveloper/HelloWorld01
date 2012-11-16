//
//  SSMasterViewController.h
//  HelloWorld01
//
//  Created by David Putter on 16/11/2012.
//  Copyright (c) 2012 Stratex Systems. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SSDetailViewController;

#import <CoreData/CoreData.h>

@interface SSMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) SSDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
