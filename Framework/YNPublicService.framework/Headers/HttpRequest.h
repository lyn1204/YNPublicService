//
//  HttpRequest.h
//  YNPublicSDK
//
//  Created by YNPublicSDK on 2019/4/12.
//  Copyright © 2019 YNPublicSDK. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AppModel;
@class ADModel;

@interface HttpRequest : NSObject

+(HttpRequest*)sharedInstance;

/**
 * @brief 检查app是否更新版本
 *  registrationID --> 添加极光推送的情况下,传此参数
 */
-(void)appUpdate:(NSString *)registrationID success:(void (^)(AppModel *model))successBlock failure:(void (^)(NSString * reason))failureBlock;

/**
 * @brief IDFA
 */
-(void)IDFAComplate:(void (^)(BOOL success))complateBlock;

/**
 * @brief 广告配置
 */
-(void)ADConfigSuccess:(void (^)(ADModel *adModel))successBlock failure:(void (^)(NSString * reason))failureBlock;


/**
 * @brief h5链接配置
 */
-(void)recommendSuccess:(void (^)(NSArray *arrData))successBlock failure:(void (^)(NSString * reason))failureBlock;


/**
 * @brief 获取付费界面index - 针对多付费界面
 */
-(void)vipIndexComplate:(void (^)(NSString *index))complateBlock;


/**
 * @brief VIP界面配置
 */
-(void)vipConfigComplate:(void (^)(NSDictionary *responseObject))complateBlock;


/**
 * @brief 购买VIP成功
 *  receipt      --> 内购成功返回信息
 *  identifier   --> 内购标识
 *  appProId     --> 内购产品id
 *  buyType      --> 0 正常购买 1 已经购买、恢复购买
 */
-(void)vipSuccess:(NSMutableDictionary *)param complate:(void (^)(NSString *outTradeNo))complateBlock;


/**
 * @brief 购买虚拟商品
 *  receipt      --> 内购成功返回信息
 *  identifier   --> 内购标识
 *  appProId     --> 内购产品id
 *  buyType      --> 0 正常购买 1 已经购买、恢复购买
 *
 *  outTradeNo - 订单编号
 */
-(void)buyGoods:(NSMutableDictionary *)param complate:(void (^)(NSString *outTradeNo))complateBlock;


/**
 * @brief 购买相关日志
 * index  -- 付费界面索引
 * event  -- 事件
 VipShow    付费界面显示
 VipClick    付费界面点击
 VipPay    付费界面购买
 VipCancel    付费界面取消
 */
-(void)vipBuyLog:(NSInteger)index event:(NSString *)event Complate:(void (^)(BOOL success))complateBlock;



/**
 * @brief 推送相关日志
 * param  参数包含下列参数
 * pushId  推送记录Id
 * registrationId  推送终端Id
 * event  事件枚举型:PushShow--->推送界面显示   PushClick--->推送界面点击
 
 */
-(void)pushSuccess:(NSMutableDictionary *)param complate:(void (^)(BOOL success))complateBlock;


/**
 * @brief 意见反馈
 *  feedback --> 反馈内容
 */
-(void)feedback:(NSString *)feedback complate:(void (^)(BOOL success))complateBlock;


@end
