/*
 * win32_thread.h
 *
 * Copyright (C) 2006  Insigme Co., Ltd
 *
 * Authors: 
 * - Decao Mao, Chenzhan Hu, Lixing Chu, Limin Jin, Liwei Zhou, Zhiqiang Jiao
 *
 * This software has been developed while working on the Linux Unified Kernel
 * project (http://linux.insigma.com.cn) in the Insigma Research Institute,  
 * which is a subdivision of Insigma Co., Ltd (http://www.insigma.com.cn).
 * 
 * The project is sponsored by Insigma Co., Ltd.
 *
 * The authors can be reached at linux@insigma.com.cn.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of  the GNU General  Public License as published by the
 * Free Software Foundation; either version 2 of the  License, or (at your
 * option) any later version.
 *
 * Revision History:
 *   Jan 2006 - Created.
 */

#ifndef _WIN32_THREAD_H_
#define _WIN32_THREAD_H_

struct task_ethread_operations {
	void (*add_ethread)(struct task_struct *tsk, struct ethread *thread);
	void (*remove_ethread)(struct task_struct *tsk, struct ethread *thread);
	void (*exit_ethread)(struct task_struct *tsk);
	void (*ethread_notify_exit)(struct task_struct *tsk, int exit_code);
	int (*ethread_notify_signal)(struct task_struct *tsk, int signal);
	void (*ethread_notify_execve)(struct task_struct *tsk);
	void (*ethread_notify_fork)(struct task_struct *tsk,
                         struct task_struct *child,
                         unsigned long clone_flags);
};

#endif
