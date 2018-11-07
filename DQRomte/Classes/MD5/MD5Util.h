//
//  MD5Util.h
//  CNTaipingAgent
//
//  Created by Aren on 15/4/8.
//  Copyright (c) 2015年 Taiping. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MD5Util : NSObject

//计算NSData 的MD5值
+(NSString*)getMD5WithData:(NSData*)data;

//计算字符串的MD5值，
+(NSString*)getmd5WithString:(NSString*)string;

//计算大文件的MD5值
+(NSString*)getFileMD5WithPath:(NSString*)path;


@end
