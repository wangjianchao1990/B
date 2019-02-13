//
//  BaseButton.h
//  AFPatient
//
//  Created by zhaoqinglei on 16/8/4.
//  Copyright © 2016年 zhaoqinglei. All rights reserved.
//
#define Color(R, G, B, A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define k_Color_Button  0x04C011   //按钮颜色
#import <UIKit/UIKit.h>
@interface BaseButton : UIButton



@end
