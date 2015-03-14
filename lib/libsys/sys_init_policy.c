#include "syslib.h"

int sys_init_policy(unsigned flags, endpoint_t proc_ep)
{
	message m;
	
	return(_kernel_call(SYS_INIT_POLICY, &m));
}