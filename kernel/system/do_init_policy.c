#include "kernel/system.h"
#include <minix/endpoint.h>
#include "kernel/kernel.h"
#include "kernel/proc.h"

/*===========================================================================*
 *                                do_init_policy                             *
 *===========================================================================*/
 int booting_flag;
 
 int do_init_policy(struct proc *caller_ptr, message *m_ptr)
 {
	
	booting_flag = DONE_BOOTING;
	return(OK);
	
 }