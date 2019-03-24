//
//  Subject.h
//  观察者模式-OC
//
//  Created by leeyii on 2019/3/24.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Observer.h"

NS_ASSUME_NONNULL_BEGIN

@protocol Subject <NSObject>

- (void)subscribe:(id <Observer>)subscriber;

- (void)unsubscribe:(id <Observer>)subscriber;

- (void)notifySubscriber:(id)userinfo;

@end

NS_ASSUME_NONNULL_END
