#include "kernel/system.h"
#include <minix/endpoint.h>

int do_rt_sample(struct proc *caller_ptr, message *m_ptr)
{
	printf("This is the do_rt_sample kernel call.\n");
	return(OK);
}
