//
//  Component.h
//  装饰者模式-OC
//
//  Created by leeyii on 2019/3/26.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 主体
@protocol Component <NSObject>

// 实现过程中,要有返回值,装饰者才能对原来的进行处理.
- (NSString *)sayMsg;

@end

// 装饰者协议
@protocol Decorator <Component>

- (instancetype)initComponent:(id <Component>)component;

@end

NS_ASSUME_NONNULL_END
