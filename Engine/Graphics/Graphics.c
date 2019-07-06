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
 * Since  : 2013-9-8
 * Update : 2019-1-19
 * Author : scott.cgi
 */


#include "Engine/Graphics/Graphics.h"
#include "Engine/Graphics/OpenGL/Shader/ShaderMesh.h"
#include "Engine/Graphics/OpenGL/Shader/ShaderSprite.h"
#include "Engine/Graphics/OpenGL/Shader/ShaderPrimitive.h"
#include "Engine/Graphics/OpenGL/GLInfo.h"


static void Init()
{
    AGLInfo         ->Init();
    AShaderMesh     ->Init();
    AShaderSprite   ->Init();
    AShaderPrimitive->Init();

    AGraphics->isUseVBO       = false;
    AGraphics->isUseVAO       = false;
    AGraphics->isUseMapBuffer = false;
}


static void SetUseVAO(bool isUseVAO)
{
    if (isUseVAO && AGLInfo->version > 2.0f)
    {
        AGraphics->isUseVAO = true;
        AGraphics->isUseVBO = true;
    }
    else
    {
        AGraphics->isUseVAO = false;
        AGraphics->isUseVBO = false;
    }
}


static void SetUseMapBuffer(bool isUseMapBuffer)
{
    if (isUseMapBuffer && AGLInfo->version > 2.0f)
    {
        AGraphics->isUseMapBuffer = true;
    }
    else
    {
        AGraphics->isUseMapBuffer = false;
    }
}


struct AGraphics AGraphics[1] =
{
    false,
    false,
    false,
    Init,
    SetUseVAO,
    SetUseMapBuffer,
};
