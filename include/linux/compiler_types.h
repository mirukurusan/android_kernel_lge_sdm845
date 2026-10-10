#ifndef _LINUX_COMPILER_TYPES_H
#define _LINUX_COMPILER_TYPES_H

/*
 * Backport shim for pre-4.14 kernels (this tree is 4.9).
 *
 * Upstream split the type/attribute annotations (__user, __rcu, __iomem,
 * __always_inline, __must_hold, ...) out of <linux/compiler.h> into
 * <linux/compiler_types.h> in Linux 4.16. On this kernel they still live
 * in <linux/compiler.h>, so provide the newer include path for code that
 * was written against 4.14+ headers (e.g. KernelSU-Next).
 */
#include <linux/compiler.h>

#endif /* _LINUX_COMPILER_TYPES_H */
