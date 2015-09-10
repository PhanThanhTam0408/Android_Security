#pragma once

#ifdef __powerpc64__
#define KERNEL_ADDR		0xc000000000000000UL
#define MODULE_ADDR		0xd000000000000000UL
#define PAGE_OFFSET		0xc000000000000000UL
#define TASK_SIZE		(PAGE_OFFSET)

#define PAGE_SHIFT		12
#define BITS_PER_LONG		64
#define PTE_RPN_SHIFT		(PAGE_SHIFT)
#define PTE_FILE_MAX_BITS	(BITS_PER_LONG - PTE_RPN_SHIFT)

#else /* __powerpc64__ */

#define KERNEL_ADDR		0xc0000000
#define MODULE_ADDR		0xd0000000
#define PAGE_OFFSET		0xc0000000
#define TASK_SIZE 		(PAGE_OFFSET)

#define PAGE_SHIFT		12
#define BITS_PER_LONG		32
#define PTE_RPN_SHIFT		(PAGE_SHIFT)
#define PTE_FILE_MAX_BITS	(BITS_PER_LONG - PTE_RPN_SHIFT)

#endif /* __powerpc64__ */

#define SYSCALLS syscalls_ppc
