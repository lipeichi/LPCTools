//
//  LPCTools.h
//  EverydayNews
//
//  Created by 李沛池 on 2017/7/20.
//  Copyright © 2017年 Godlike. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "LPCDefine.h"

@interface LPCTools : NSObject


#pragma mark - String
//去掉空格
+ (NSString *)removeSpace:(NSString *)string;

#pragma mark - View
//提示框
+ (void)showAlertWithViewController:(UIViewController *)viewController
                              title:(NSString *)title
                            message:(NSString *)message
                       leftBtnTitle:(NSString *)leftBtnTitle
                      rightBtnTitle:(NSString *)rightBtnTitle
                        actionBlock:(void(^)(BOOL isCancel))actionBlock;
//显示下载标示
- (void)openStatusNetWorkLoad:(BOOL)isLoad;
//判断当前窗口是否含有alertView
+ (BOOL)alertViewExist;

#pragma mark - Notification
//根据key获取本地推送
+ (UILocalNotification*)getLocalPushWithKey:(NSString *)key;
//根据key移除本地推送
+ (void)removeLocalPushWithKey:(NSString*)key;

#pragma mark - Log
//POST请求字典转为字符串格式
+ (NSString *)strRequestWithDictionary:(NSDictionary *)dict;
//打印IOS SDK下的字体
+ (void)enumerateFont;

#pragma mark - Image
//设置圆角(避免离屏渲染)
+ (void)avoidOffscreen:(UIImageView *)iView image:(UIImage *)image cornerRadius:(CGFloat)cornerRadius;
//iPhone截屏
+ (UIImage *)clipScreen:(UIView *)v size:(CGSize)size;

#pragma mark - Time
//返回当前时间戳
+ (NSString *)nowTimeStampFromCurrentDate;
//获取当前日期的指定格式
+ (NSString *)getDateWithFormatter:(NSString *)formatter;

#pragma mark - 验证
//判断是否是纯汉字
+ (BOOL)isChinese:(NSString *)str;
//判断是否含有汉字
+ (BOOL)includeChinese:(NSString *)str;
//是否是纯字母
+ (BOOL)pureLetters:(NSString*)str;
//验证字符串是否为纯数字
+ (BOOL)deptNumInputShouldNumber:(NSString *)str;
//浮点形判断
+ (BOOL)isPureFloat:(NSString *)string;
//判断字符串是否有效
+ (BOOL)stringIsValid:(NSString *)string;
//验证邮箱是否符合基本规则
+ (BOOL)validateEmail:(NSString *)email;
//验证手机
+ (BOOL)validateMobile:(NSString *)mobileNum;

#pragma mark - 稳定性
//替换非UTF8字符
//注意：如果是三字节utf-8，第二字节错误，则先替换第一字节内容(认为此字节误码为三字节utf8的头)，然后判断剩下的两个字节是否非法；
+ (NSData *)replaceNoUtf8:(NSData *)data;


@end
