//
//  Archive.m
//  BluetoothPay
//
//  Created by zhao qinglei on 2017/5/1.
//  Copyright © 2017年 zhao qinglei. All rights reserved.
//

#import "Archive.h"

@implementation Archive 


-(id)initWithCoder:(NSCoder*)aDecoder
{
    self = [super init];
    if (self) {
        _peripheral = [aDecoder decodeObjectForKey:@"peripheral"];
    }
    return self;
}


-(void)encodeWithCoder:(NSCoder*)aCoder
{
    [aCoder encodeObject:_peripheral forKey:@"peripheral"];
}



@end
