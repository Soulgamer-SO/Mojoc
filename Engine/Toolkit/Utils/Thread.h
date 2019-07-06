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
 * Since  : 2019-1-30
 * Update : 2019-1-30
 * Author : scott.cgi
 */


#ifndef THREAD_H
#define THREAD_H


/**
 * Thread running function.
 */
typedef void* (*ThreadRun)(void* param);

/**
 * Manage and control thread.
 */
struct AThread
{
    /**
     * Start a thread with PTHREAD_CREATE_DETACHED.
     * the param will passed to ThreadRun.
     *
     * return 0 success start a thread, else return error id.
     */
    int (*StartThread)(ThreadRun Run, void* param);
};


extern struct AThread AThread[1];


#endif
