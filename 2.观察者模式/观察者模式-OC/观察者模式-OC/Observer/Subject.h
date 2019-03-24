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
// 通知观察值观察对象发生变化
// 使用id类型 只能通过观察者和被观察者直接约定进行通信
- (void)notifySubscriber:(id)userinfo;

@end

NS_ASSUME_NONNULL_END
