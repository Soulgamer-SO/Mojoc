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
 * Since  : 2014-5-4
 * Update : 2019-2-1
 * Author : scott.cgi
 */


#ifndef EXTENSION_H
#define EXTENSION_H


#include "Engine/Toolkit/Toolkit.h"


struct AExtension
{
    void (*Init)(void);
};


extern struct AExtension AExtension[1];


#endif
