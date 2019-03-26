//
//  ConcreteComponent.h
//  装饰者模式-OC
//
//  Created by leeyii on 2019/3/26.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Component;

NS_ASSUME_NONNULL_BEGIN

@interface ConcreteComponent : NSObject <Component>

@end

NS_ASSUME_NONNULL_END
