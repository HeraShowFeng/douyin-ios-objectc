//
//  MikuLogger.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MikuMetric.h"
#import "MikuEnv.h"

NS_ASSUME_NONNULL_BEGIN

@interface MikuLogger : NSObject

@property (nonatomic, strong, readonly) NSString *appID;

@property (nonatomic, strong, readonly) NSString *appSalt;

@property (nonatomic, strong, readonly) MikuEnv *env;

@property (nonatomic, strong, readonly) NSString *dir;

+ (MikuLogger *)createLogger:(NSString *)appID
                     appSalt:(NSString *)appSalt
                         env:(MikuEnv *)env
                         dir:(NSString *)dir;

- (NSError *)log:(MikuMetric *)metric;

@end

NS_ASSUME_NONNULL_END
