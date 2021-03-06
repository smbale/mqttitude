//
//  Location+Create.h
//  mqttitude
//
//  Created by Christoph Krey on 29.09.13.
//  Copyright (c) 2013 Christoph Krey. All rights reserved.
//

#import "Location.h"
#import <MapKit/MapKit.h>


@interface Location (Create) <MKAnnotation>
+ (Location *)locationWithTopic:(NSString *)topic
                      timestamp:(NSDate *)timestamp
                     coordinate:(CLLocationCoordinate2D)coordinate
                       accuracy:(CLLocationAccuracy)accuracy
                      automatic:(BOOL)automatic
     inManagedObjectContext:(NSManagedObjectContext *)context;
+ (NSArray *)allLocationsInManagedObjectContext:(NSManagedObjectContext *)context;
+ (NSArray *)allLocationsWithFriend:(Friend *)friend inManagedObjectContext:(NSManagedObjectContext *)context;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
- (void) getReverseGeoCode;
- (NSString *)nameText;
- (NSString *)timestampText;
- (NSString *)locationText;
- (NSString *)coordinateText;

@end
