//
//  Observer.h
//  观察者模式-OC
//
//  Created by leeyii on 2019/3/24.
//  Copyright © 2019 leeyii. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Subject;

NS_ASSUME_NONNULL_BEGIN

@protocol Observer <NSObject>

- (void)didReciveNotification:(id<Subject>)subject userinfo:(id)userinfo;

@end

NS_ASSUME_NONNULL_END
