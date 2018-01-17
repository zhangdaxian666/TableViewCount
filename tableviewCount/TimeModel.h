//
//  TimeModel.h
//  tableviewCount
//
//  Created by slcf888 on 2018/1/17.
//  Copyright © 2018年 slcf888. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TimeModel : NSObject

@property (nonatomic, strong) NSString *m_titleStr;
@property (nonatomic) int m_countNum;

//便利      标题。  倒计时
+ (instancetype)timeModelWithTitle:(NSString *)title time:(int)time;
//计数减
- (void)countDown;
//将当前的countdownTime信息转换成字符串
- (NSString *)currentTimeString;

@end
