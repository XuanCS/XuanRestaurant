//
//  YelpNetworking.h
//  SummeryelpMock
//
//  Created by LuXuan on 8/26/17.
//  Copyright © 2017 LuXuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"
// decept
@class YelpDataModel;
@import CoreLocation;

typedef void (^RestaurantCompletionBlock)(NSArray <YelpDataModel *>* dataModelArray);

@interface YelpNetworking : NSObject

+ (YelpNetworking *)sharedInstance;

- (void)fetchRestaurantsBasedOnLocation:(CLLocation *)location term:(NSString *)term completionBlock:(RestaurantCompletionBlock)completionBlock;

@end

