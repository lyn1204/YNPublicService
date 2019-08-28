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


+(HttpRequest*_Nullable)sharedInstance;


/**
 * @brief 广告配置
 * isFirst 是否第一次启动
 */
-(void)ADConfigSuccess:(BOOL)isFirst success:(void (^_Nullable)(ADModel * _Nullable adModel))successBlock failure:(void (^_Nullable)(NSString * _Nullable reason))failureBlock;


/**
 * @brief 设备信息收集
 * 注:新项目此接口会在广告配置接口调取成功后自动调取,无需单独调用
 * 老项目需要在广告配置接口调用成功后单独调用
 */
-(void)deviceInfoComplate:(void (^_Nullable)(BOOL success))complateBlock;


/**
 * @brief 下发规则接口
 * rule 下发规则 - 找后台人员要
 * 注:由于项目需要的下发参数不同,需在成功回调中根据数据结构自行创建model类进行接收
 */
-(void)ruleIssueConfig:(NSString * _Nullable )rule success:(void (^_Nullable)(NSDictionary * _Nullable responseObject))successBlock failure:(void (^_Nullable)(NSString * _Nullable reason))failureBlock;


/**
 * @brief 收集IDFA
 * 老项目调用,新项目包含在设备信息收集接口
 */
-(void)IDFAComplate:(void (^_Nullable)(BOOL success))complateBlock;


/**
 * @brief 检查app是否更新版本
 *  registrationID --> 添加极光推送的情况下,传此参数
 */
-(void)appUpdate:(NSString * _Nullable )registrationID success:(void (^_Nullable)(AppModel * _Nullable model))successBlock failure:(void (^_Nullable)(NSString * _Nullable reason))failureBlock;


/**
 * @brief h5链接配置
 */
-(void)recommendSuccess:(void (^_Nullable)(NSArray * _Nullable arrData))successBlock failure:(void (^_Nullable)(NSString * _Nullable reason))failureBlock;


/**
 * @brief 获取付费界面index - 针对多付费界面
 */
-(void)vipIndexComplate:(void (^_Nullable)(NSString * _Nullable index))complateBlock;


/**
 * @brief VIP界面配置
 */
-(void)vipConfigComplate:(void (^_Nullable)(NSDictionary * _Nullable responseObject))complateBlock;


/**
 * @brief 购买VIP成功
 * param  可变字典 - 参数包含下列参数
 *  receipt      --> 内购成功返回信息
 *  identifier   --> 内购标识
 *  appProId     --> 内购产品id
 *  buyType      --> 0 正常购买 1 已经购买、恢复购买
 */
-(void)vipSuccess:(NSMutableDictionary *_Nullable)param complate:(void (^_Nullable)(BOOL success))complateBlock;


/**
 * @brief 购买虚拟商品
 * param  可变字典 - 参数包含下列参数
 *  receipt      --> 内购成功返回信息
 *  identifier   --> 内购标识
 *  appProId     --> 内购产品id
 *  buyType      --> 0 正常购买 1 已经购买、恢复购买
 *
 *  outTradeNo - 订单编号
 */
-(void)buyGoods:(NSMutableDictionary *_Nullable)param complate:(void (^_Nullable)(NSString * _Nullable outTradeNo))complateBlock;


/**
 * @brief 购买相关日志
 * index  -- 付费界面索引
 * event  -- 事件
 VipShow    付费界面显示
 VipClick    付费界面点击
 VipPay    付费界面购买
 VipCancel    付费界面取消
 */
-(void)vipBuyLog:(NSInteger)index event:(NSString *_Nullable)event Complate:(void (^_Nullable)(BOOL success))complateBlock;


/**
 * @brief 意见反馈
 *  feedback --> 反馈内容
 */
-(void)feedback:(NSString *_Nullable)feedback complate:(void (^_Nullable)(BOOL success))complateBlock;



/**
 * @brief 推送相关日志
 * param  可变字典 - 参数包含下列参数
 * pushId  推送记录Id
 * registrationId  推送终端Id
 * event  事件枚举型:PushShow--->推送界面显示   PushClick--->推送界面点击
 
 */
-(void)pushSuccess:(NSMutableDictionary *_Nullable)param complate:(void (^_Nullable)(BOOL success))complateBlock;


@end
