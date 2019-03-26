//
//  ConcreteDecorator.h
//  装饰者模式-OC
//
//  Created by leeyii on 2019/3/26.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Decorator;

NS_ASSUME_NONNULL_BEGIN

@interface ConcreteDecoratorA : NSObject <Decorator>

@end

@interface ConcreteDecoratorB : NSObject <Decorator>

@end

@interface ConcreteDecoratorC : NSObject <Decorator>

@end

NS_ASSUME_NONNULL_END
