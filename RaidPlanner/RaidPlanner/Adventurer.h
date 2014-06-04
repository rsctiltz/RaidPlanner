//
//  Adventurer.h
//  RaidPlanner
//
//  Created by Ryan Tiltz on 6/4/14.
//  Copyright (c) 2014 Ryan Tiltz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Raid;

@interface Adventurer : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * species;
@property (nonatomic, retain) NSSet *raiders;
@end

@interface Adventurer (CoreDataGeneratedAccessors)

- (void)addRaidersObject:(Raid *)value;
- (void)removeRaidersObject:(Raid *)value;
- (void)addRaiders:(NSSet *)values;
- (void)removeRaiders:(NSSet *)values;

@end
