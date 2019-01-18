//
//  MyAudioUnitManagerCallback.h
//  AudUnit
//
//  Created by Sihang Huang on 1/15/19.
//  Copyright © 2019 sihang huang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^DidGetEffectsBlock)(NSArray *);

@interface RenderAUDataManager : NSObject
- (void)constructUnits;
- (void)start;
- (void)stop;

@property (nonatomic, copy) DidGetEffectsBlock didGetEffectsBlock;

@end

NS_ASSUME_NONNULL_END