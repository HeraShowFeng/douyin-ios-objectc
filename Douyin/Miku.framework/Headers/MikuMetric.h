//
//  MikuMetric.h
//  Miku
//
//  Copyright © 2022 Qiniu Cloud (qiniu.com). All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MikuMetric : NSObject

- (NSString *)name;
- (NSArray <NSString *> *)fields;
- (NSArray <NSString *> *)values;

@end

NS_ASSUME_NONNULL_END
