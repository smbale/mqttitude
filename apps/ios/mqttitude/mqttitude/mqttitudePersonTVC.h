//
//  mqttitudePersonTVC.h
//  mqttitude
//
//  Created by Christoph Krey on 29.10.13.
//  Copyright (c) 2013 Christoph Krey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>

@interface mqttitudePersonTVC : UITableViewController

@property (nonatomic) ABRecordRef person;

@end