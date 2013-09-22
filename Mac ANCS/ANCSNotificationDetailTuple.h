//
//  ANCSNotificationDetailTuple.h
//  Mac ANCS
//
//  Created by Jamie Pinkham on 9/22/13.
//  Copyright (c) 2013 Jamie Pinkham. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ANCSController.h"

@interface ANCSNotificationDetailTuple : NSObject

@property (nonatomic, assign) ANCSNotificationAttributeType attributeType;
@property (nonatomic, assign) uint16_t length;
@property (nonatomic, readonly, getter = isComplete) BOOL complete;
@property (nonatomic, readonly) NSString *value;

- (NSData *)appendData:(NSData *)data;

@end
