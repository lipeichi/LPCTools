//
//  LPCObjectDefine.h
//  Pods
//
//  Created by 李沛池 on 2018/12/4.
//

#ifndef LPCObjectDefine_h
#define LPCObjectDefine_h


#define FILEMANAGER_Default            [NSFileManager defaultManager]
#define USERDEFAULTS_Default           [NSUserDefaults standardUserDefaults]
#define KEYWINDOW_Default              [[UIApplication sharedApplication] keyWindow]

//读取存储值
#define UserDefaultsObjForKey(key)     [USERDEFAULTS_Default objectForKey:key]


#endif /* LPCObjectDefine_h */
