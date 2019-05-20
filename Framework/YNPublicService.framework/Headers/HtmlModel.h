//
//  HtmlModel.h
//  YNPublicSDK
//
//  Created by YNPublicSDK on 2019/4/12.
//  Copyright © 2019 YNPublicSDK. All rights reserved.
//

#import "JSONModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HtmlModel
@end
@interface HtmlModel : JSONModel

@property(strong,nonatomic) NSString<Optional> *id;
@property(strong,nonatomic) NSString<Optional> *logUrl;
@property(strong,nonatomic) NSString<Optional> *param1;
@property(strong,nonatomic) NSString<Optional> *param2;
@property(strong,nonatomic) NSString<Optional> *display;
@property(strong,nonatomic) NSString<Optional> *nameEn;
@property(strong,nonatomic) NSString<Optional> *nameCn;

@end


@interface HtmlInfoModel : JSONModel

@property(strong,nonatomic) NSString<Optional> *totalSize;
@property(strong,nonatomic) NSString<Optional> *totalPageCount;
@property(strong,nonatomic) NSString<Optional> *pageIndex;
@property(strong,nonatomic) NSString<Optional> *pageSize;
@property(strong,nonatomic) NSArray<HtmlModel,Optional> *list;

@end

NS_ASSUME_NONNULL_END
