//
//  Chatacter.h
//  1.策略模式-OC
//
//  Created by leeyii on 2019/3/23.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WeaponBehavior.h"

NS_ASSUME_NONNULL_BEGIN

@interface Chatacter : NSObject

@property (nonatomic, strong) id <WeaponBehavior> weaponBehavior;

- (instancetype)initWithWeaponBehavior:(id <WeaponBehavior>)weaponBehavior;

- (void)fight;

@end

NS_ASSUME_NONNULL_END
