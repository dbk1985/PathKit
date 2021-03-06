//
//  TestPKPathNodeDelegate.h
//  PathKit
//
//  Created by Mat Ryer on 3/6/14.
//  Copyright (c) 2014 Mat Ryer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PKPathNodeDelegate.h"

@interface TestPKPathNodeDelegate : NSObject <PKPathNodeDelegate>

@property (copy, readonly) NSMutableArray *methods;
@property (strong, readonly) NSMutableArray *lastArgs;

- (void)reset;

@end
