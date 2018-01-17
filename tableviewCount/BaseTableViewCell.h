//
//  BaseTableViewCell.h
//  tableviewCount
//
//  Created by slcf888 on 2018/1/17.
//  Copyright © 2018年 slcf888. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseTableViewCell : UITableViewCell

//获取tableviewcell的indexPath
@property (nonatomic, weak) NSIndexPath *m_indexPath;

@property (nonatomic) BOOL m_isDisplayed;

//配置cell的默认属性
- (void)defaultConfig;
//在cell上面构建view
- (void)buildViews;
//加载数据     data数据    indexPath数据编号
- (void)loadData:(id)data indexPath:(NSIndexPath *)indexPath;

@end
