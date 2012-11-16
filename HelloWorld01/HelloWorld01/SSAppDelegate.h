//
//  SSAppDelegate.h
//  HelloWorld01
//
//  Created by David Putter on 16/11/2012.
//  Copyright (c) 2012 Stratex Systems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
