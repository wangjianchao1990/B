//
//  Archive.h
//  BluetoothPay
//
//  Created by zhao qinglei on 2017/5/1.
//  Copyright © 2017年 zhao qinglei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import  <CoreBluetooth/CoreBluetooth.h>
@interface Archive : NSObject <NSCoding>

@property(nonatomic, strong)CBPeripheral    *peripheral;        //外设

@end
