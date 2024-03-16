
#ifndef __FEMU_VAR_H
#define __FEMU_VAR_H
#include "bbssd/ftl.h"
#define hotstorage_basic_log 1
#define hotstorage_detailed_log 0

#define hotstorage_gc_basic_log 0
#define hotstorage_gc_detail_log 0

#define HOT_GC_GROUP 0
#define COLD_GC_GROUP 1
#define NO_GC_GROUP 12
#define NUM_GC_GROUP 7

extern int *pecycle;
extern uint64_t data_write_bytes;
extern uint64_t host_write_bytes;
extern struct write_pointer gc_group_wpp[NUM_GC_GROUP];

extern void basic_printf(const char *format, ...);
extern void detail_printf(const char *format, ...);
extern void gc_basic_printf(const char *format, ...);
extern void gc_detail_printf(const char *format, ...);

#endif