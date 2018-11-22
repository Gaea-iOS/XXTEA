/**********************************************************\
|                                                          |
| XXTEA.h                                                  |
|                                                          |
| XXTEA encryption algorithm library for Objective-C.      |
|                                                          |
| Encryption Algorithm Authors:                            |
|      David J. Wheeler                                    |
|      Roger M. Needham                                    |
|                                                          |
| Code Authors: Chen fei <cf850118@163.com>                |
|               Ma Bingyao <mabingyao@gmail.com>           |
| LastModified: Mar 10, 2015                               |
|                                                          |
\**********************************************************/

#import <Foundation/Foundation.h>

@interface XXTEA : NSObject

+ (NSData * _Nonnull) encrypt:(NSData * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSData * _Nonnull) encrypt:(NSData * _Nonnull)data stringKey:(NSString * _Nonnull)key;

+ (NSString * _Nonnull) encryptToBase64String:(NSData * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSString * _Nonnull) encryptToBase64String:(NSData * _Nonnull)data stringKey:(NSString * _Nonnull)key;

+ (NSData * _Nonnull) encryptString:(NSString * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSData * _Nonnull) encryptString:(NSString * _Nonnull)data stringKey:(NSString * _Nonnull)key;

+ (NSString * _Nonnull) encryptStringToBase64String:(NSString * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSString * _Nonnull) encryptStringToBase64String:(NSString * _Nonnull)data stringKey:(NSString * _Nonnull)key;

+ (NSData * _Nullable) decrypt:(NSData * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSData * _Nullable) decrypt:(NSData * _Nonnull)data stringKey:(NSString * _Nonnull)key;

+ (NSData * _Nullable) decryptBase64String:(NSString * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSData * _Nullable) decryptBase64String:(NSString * _Nonnull)data stringKey:(NSString * _Nonnull)key;

+ (NSString * _Nullable) decryptToString:(NSData * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSString * _Nullable) decryptToString:(NSData * _Nonnull)data stringKey:(NSString * _Nonnull)key;

+ (NSString * _Nullable) decryptBase64StringToString:(NSString * _Nonnull)data key:(NSData * _Nonnull)key;
+ (NSString * _Nullable) decryptBase64StringToString:(NSString * _Nonnull)data stringKey:(NSString * _Nonnull)key;

@end

@interface NSData (XXTEA)

- (NSData * _Nonnull) xxteaEncrypt:(NSData *  _Nonnull)key;
- (NSData * _Nullable) xxteaDecrypt:(NSData *  _Nonnull)key;

@end
