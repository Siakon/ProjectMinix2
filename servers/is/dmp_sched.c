/* This file contains procedures to dump to SCHED data stractures.
 * 
 * The entry points into this file are
 * schedproc_dmp:	display SCHED process tanle
 *
 * Created:
 *    October 20, 2014:	by Konstantinos Siaterlis
 */

#include "inc.h"
#include "../sched/schedproc.h"
#include <timers.h>
#include <minix/config.h>
#include <minix/type.h>

struct schedproc schedproc[NR_PROCS];

/*===============================================*
 *           schedproc_dmp                       *
 *===============================================*/ 
