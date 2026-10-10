#ifndef _LINUX_SCHED_USER_H
#define _LINUX_SCHED_USER_H

/*
 * Backport shim for pre-4.11 kernels (this tree is 4.9).
 *
 * Upstream split struct user_struct et al. out of <linux/sched.h> into
 * <linux/sched/user.h> in Linux 4.11. On this kernel they still live in
 * <linux/sched.h>, so provide the newer include path for code that was
 * written against 4.11+ headers (e.g. KernelSU-Next).
 */
#include <linux/sched.h>

#endif /* _LINUX_SCHED_USER_H */
