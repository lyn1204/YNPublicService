//
//  AppModel.h
//  YNPublicSDK
//
//  Created by YNPublicSDK on 2019/4/12.
//  Copyright © 2019 YNPublicSDK. All rights reserved.
//

#import "JSONModel.h"

@protocol AppModel
@end
@interface AppModel : JSONModel

@property(strong,nonatomic) NSString<Optional> *forcedUpdate;//是否强制更新
@property(strong,nonatomic) NSString<Optional> *updateUrl;//更新链接
@property(strong,nonatomic) NSString<Optional> *message;//更新说明
@property(strong,nonatomic) NSString<Optional> *currentVersion;//最新版本

@end

@interface AppInfoModel : JSONModel

@property(strong,nonatomic) NSString<Optional> *code;
@property(strong,nonatomic) NSString<Optional> *msg;
@property(strong,nonatomic) NSString<Optional> *url;
@property(strong,nonatomic) AppModel<Optional> *data;

@end
