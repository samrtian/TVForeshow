//
//  TVAppDelegate.h
//  TVForeshow
//
//  Created by Xukai on 14-1-6.
//  Copyright (c) 2014年 Xukai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TVAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
