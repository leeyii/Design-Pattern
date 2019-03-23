//
//  Chatacter.m
//  1.策略模式-OC
//
//  Created by leeyii on 2019/3/23.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import "Chatacter.h"

@implementation Chatacter

- (instancetype)initWithWeaponBehavior:(id<WeaponBehavior>)weaponBehavior {
    
    self = [super init];
    if (self) {
        self.weaponBehavior = weaponBehavior;
    }
    return self;
}


- (void)fight {
    
    if (!self.weaponBehavior) {
        NSLog(@"使用拳头攻击");
    }
    
    [self.weaponBehavior useWeapon];
}

@end
