//
//  ADModel.h
//  YNPublicSDK
//
//  Created by YNPublicSDK on 2019/4/12.
//  Copyright © 2019 YNPublicSDK. All rights reserved.
//

#import "JSONModel.h"
#import "HtmlModel.h"

@protocol ADConfigModel
@end
@interface ADConfigModel : JSONModel

@property(strong,nonatomic) NSString<Optional> *zone;//广告位
@property(strong,nonatomic) NSString<Optional> *remark;//说明
@property(strong,nonatomic) NSString<Optional> *display;//广告是否展示
@property(strong,nonatomic) NSString<Optional> *adType;//广告类型

@end

@protocol ADInfoModel
@end
@interface ADInfoModel : JSONModel

@property(strong,nonatomic) NSString<Optional> *adType;//广告商
@property(strong,nonatomic) NSString<Optional> *appKey;//请求广告需要的信息,key,id等
@property(strong,nonatomic) NSString<Optional> *remark;//说明

@end

@protocol ADModel
@end
@interface ADModel : JSONModel

@property(strong,nonatomic) NSArray<ADConfigModel,Optional> *adConfigs;//广告配置
@property(strong,nonatomic) NSArray<ADInfoModel,Optional> *adInfoVos;//广告账户信息
@property(strong,nonatomic) NSArray<HtmlModel,Optional> *recommend;

@end


@interface ADDataModel : JSONModel

@property(strong,nonatomic) NSString<Optional> *code;
@property(strong,nonatomic) NSString<Optional> *msg;
@property(strong,nonatomic) NSString<Optional> *url;
@property(strong,nonatomic) ADModel<Optional> *data;


@end
