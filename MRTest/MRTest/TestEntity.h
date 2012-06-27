//
//  TestEntity.h
//  MRTest
//
//  Created by Georg Bachmann on 27.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event;

@interface TestEntity : NSManagedObject

@property (nonatomic, retain) Event *event;

@end
