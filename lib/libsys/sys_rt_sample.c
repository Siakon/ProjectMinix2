#include "syslib.h"

int sys_rt_sample(unsigned flags, endpoint proc_ep){
	
	message m;
	
	return(_kernel_call(SYS_RT_SAMPLE, &m));

}
