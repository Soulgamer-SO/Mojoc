/*
 * Copyright (c) 2012-2019 scott.cgi All Rights Reserved.
 *
 * This source code is licensed under the MIT License.
 * This source code belongs to project Mojoc which is a pure C game engine hosted on GitHub.
 * This Mojoc game engine is a serious project with extreme code pursuit, and will continue to iterate.
 *
 * License: https://github.com/scottcgi/Mojoc/blob/master/LICENSE
 * GitHub : https://github.com/scottcgi/Mojoc
 *
 * Since  : 2015-5-6
 * Update : 2019-1-8
 * Author : scott.cgi
 */

 
#ifndef PLATFORM_H
#define PLATFORM_H


#define PLATFORM_ANDROID 0
#define PLATFORM_IOS     1
#define PLATFORM_TARGET  PLATFORM_ANDROID


#if PLATFORM_TARGET == PLATFORM_ANDROID
    #define IS_PLATFORM_ANDROID
#elif PLATFORM_TARGET == PLATFORM_IOS
    #define IS_PLATFORM_IOS
#endif


#endif
