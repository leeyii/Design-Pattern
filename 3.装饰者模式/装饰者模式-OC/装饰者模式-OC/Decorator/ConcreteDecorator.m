//
//  ConcreteDecorator.m
//  装饰者模式-OC
//
//  Created by leeyii on 2019/3/26.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import "ConcreteDecorator.h"
#import "Component.h"

@interface ConcreteDecoratorA ()

@property (nonatomic, strong) id <Component> component;

@end

@implementation ConcreteDecoratorA

- (instancetype)initComponent:(id<Component>)component {
    
    self = [super init];
    if (self) {
        self.component = component;
    }
    return self;
}

- (NSString *)sayMsg {
    
    return [NSString stringWithFormat:@"%@ HH", self.component.sayMsg];
}

@end

@interface ConcreteDecoratorB ()

@property (nonatomic, strong) id <Component> component;

@end

@implementation ConcreteDecoratorB

- (instancetype)initComponent:(id<Component>)component {
    
    self = [super init];
    if (self) {
        self.component = component;
    }
    return self;
}

- (NSString *)sayMsg {
    
    return [NSString stringWithFormat:@"%@ CC", self.component.sayMsg];
}

@end

@interface ConcreteDecoratorC ()

@property (nonatomic, strong) id <Component> component;

@end

@implementation ConcreteDecoratorC

- (instancetype)initComponent:(id<Component>)component {
    
    self = [super init];
    if (self) {
        self.component = component;
    }
    return self;
}

- (NSString *)sayMsg {
    
    return [NSString stringWithFormat:@"%@ ZZ", self.component.sayMsg];
}

@end
