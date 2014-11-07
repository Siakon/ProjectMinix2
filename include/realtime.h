/* Here are all the functions I will use for setting the system to 
 * real time mode.
 *	is_rt(p) - A macro that finds out if a process is real time or not
 * 	etc...
 */

#ifndef REALTIME_H
#define REALTIME_H

#include <ansi.h>

/* List of macros */
#define is_rt(p) ((p)->p_realtime == 1) ? 1 : 0

/* Scheduler state defined */
#define SCHED_NORMAL	0
#define SCHED_RM	1
#define SCHED_EDF	2
#define SCHED_SYSTEM_RT 3

int set_rt_sched(int scheduler);
int set_rt_rm(void);
int set_rt_edf(void);
int set_system_rt_sched(void);
//int choose_proc_to_run(endpoint p_end);

int sample_rt_func(void);


#endif
