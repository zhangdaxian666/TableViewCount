//
//  TimeModel.m
//  tableviewCount
//
//  Created by slcf888 on 2018/1/17.
//  Copyright © 2018年 slcf888. All rights reserved.
//

#import "TimeModel.h"

@implementation TimeModel

+ (instancetype)timeModelWithTitle:(NSString *)title time:(int)time
{
    TimeModel *model = [self new];
    
    model.m_titleStr = title;
    model.m_countNum = time;
    
    return model;
}
- (void)countDown
{
    _m_countNum -= 1;
}
//将当前的counttime转换成字符串
- (NSString *)currentTimeString
{
    if (_m_countNum<=0) {
        return @"00:00:00";
    }else{
        return [NSString stringWithFormat:@"%02d:%02d:%02d",_m_countNum/3600,_m_countNum%3600/60,_m_countNum%60];
    }
}
@end
