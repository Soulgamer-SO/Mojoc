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
 * Since  : 2013-4-6
 * Update : 2019-19
 * Author : scott.cgi
 */


#ifndef BUFFER_READER_H
#define BUFFER_READER_H


#include <stdbool.h>
#include <stdint.h>
#include "Engine/Toolkit/HeaderUtils/ArrayRange.h"


/**
 * Read different types of data from buffer.
 */
struct ABufferReader
{
    /**
     * Read line from range in buffer, move range->start to newline, and record line in outLine.
     * the outLine->end may be '\n' or '\r' or range->end (not found newline char).
     */
    void   (*ReadLine)     (const char* buffer, ArrayRange* range, ArrayRange* outLine);

    /**
     * Find str from range in buffer.
     *
     * if return true
     *     found the str and move range->start behind str in buffer, but not more than range->end.
     * else
     *     not found str and keep range->start.
     */
    bool   (*TryFindString)(const char* buffer, ArrayRange* range, const char* str);
};


extern struct ABufferReader ABufferReader[1];


#endif
