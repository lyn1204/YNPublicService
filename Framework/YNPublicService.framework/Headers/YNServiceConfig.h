//
//  YNServiceConfig.h
//  YNPublicService
//
//  Created by 刘艳妮 on 2019/5/18.
//  Copyright © 2019 YNPublicService. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    YNConfigureContentType=0,
    YNConfigureToolType=1,
} YNConfigureType;

/** 变量声明 */
#undef    property_nsstring
#define property_nsstring( __path )                                \
@property (nonatomic, strong) NSString * __path;    \

@interface YNServiceConfig : NSObject

@property(assign,nonatomic) YNConfigureType type;
property_nsstring( AppID )
property_nsstring( AppVersion )
property_nsstring( UDID )
property_nsstring( Channel )
property_nsstring( Token )
property_nsstring( ProductId )
property_nsstring( VestId )
property_nsstring( PhoneType )
property_nsstring( IPhoneModel )
property_nsstring( DeviceVersion )
property_nsstring( OsType )
property_nsstring( IDFA )
property_nsstring( mobileModel )
property_nsstring( osVersion )

+(YNServiceConfig*)sharedInstance;

/** 配置相关信息 */
/**
 * @brief 配置相关信息
 *
 *  AppID --> 应用的AppID
 *  AppVersion --> 应用当前版本
 *  UDID  -->  设备UDID
 *  Channel -->  渠道,如:appstore
 *  Token -->  验证,暂定:ddmh@2018
 *  ProductId --> 产品id,公共运营平台中生成的产品id
 *  VestId -->  马甲id, 公共服务平台中获取
 *  type --> 公共服务类型:内容型/工具性
 *
 */
-(void)configureWithAppID:(NSString *)AppID appVersion:(NSString *)AppVersion udid:(NSString *)UDID channel:(NSString *)Channel token:(NSString *)Token productId:(NSString *)ProductId vestId:(NSString *)VestId configureType:(YNConfigureType)type;

@end

NS_ASSUME_NONNULL_END
