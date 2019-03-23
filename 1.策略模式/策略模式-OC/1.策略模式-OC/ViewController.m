//
//  ViewController.m
//  1.策略模式-OC
//
//  Created by leeyii on 2018/1/20.
//  Copyright © 2018年 leeyii. All rights reserved.
//

#import "ViewController.h"
#import "strategy/Game.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    KnifeBehavior *knifeBehavior = [[KnifeBehavior alloc] init];
    AxeBehavior *axeBehavior = [[AxeBehavior alloc] init];
    Chatacter *king = [[King alloc] initWithWeaponBehavior:knifeBehavior];
    [king fight];
    Chatacter *queen = [[Queen alloc] init];
    [queen fight];
    Chatacter *troll = [[Troll alloc] initWithWeaponBehavior:axeBehavior];
    [troll fight];
    Chatacter *knight = [[Knight alloc] initWithWeaponBehavior:axeBehavior];
    [knight fight];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
