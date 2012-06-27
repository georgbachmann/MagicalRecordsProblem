//
//  MasterViewController.h
//  MRTest
//
//  Created by Georg Bachmann on 27.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
    NSManagedObjectID* objectID;
}

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;

@end
