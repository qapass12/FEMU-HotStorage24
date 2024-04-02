
#ifndef __FEMU_VAR_H
#define __FEMU_VAR_H
#include "bbssd/ftl.h"
#define hotstorage_basic_log 1
#define hotstorage_detailed_log 0
#define hotstorage_wr_basic_log 1
#define hotstorage_wr_detail_log 0
// hotstorage-gc
#define hotstorage_gc_basic_log 1
#define hotstorage_gc_detail_log 0
#define hotstorage_gc_specific_log 0
#define HOT_GC_GROUP 0
#define COLD_GC_GROUP 1
#define NUM_GC_GROUP 3
extern struct write_pointer gc_group_wpp[NUM_GC_GROUP];
extern void gc_basic_printf(const char *format, ...);
extern void gc_detail_printf(const char *format, ...);
extern void gc_specific_printf(const char *format, ...);
extern uint64_t group_pecycle[8];
extern uint64_t group_capacity[8];
extern uint64_t num_buffer; //g1 buffer size
#define BUFFER_SIZE_PG 838861
//#define BUFFER_SIZE_PG 0
#define buffer_group 10 // 0=hot, 1=g1, 2=g2, 3=g3, 10=nobuf
#define GC_HOT_LATENCY  60
extern uint32_t last_self_replication;
//
extern int *pecycle;
typedef struct {
    uint64_t low;
    uint64_t lowmid;
    uint64_t highmid;
    uint64_t high;
} Uint256_t;
extern void initUint256(Uint256_t *value);
extern void addUint256(Uint256_t *value, uint64_t addValue);
extern void printUint256(const Uint256_t *value);
// extern void collect_waf(void);
extern uint64_t num_collect;
extern float current_waf;
extern uint64_t data_write_page;
extern uint64_t host_write_page;
// extern Uint256_t data_write_page;
// extern Uint256_t host_write_page;
extern void basic_printf(const char *format, ...);
extern void detail_printf(const char *format, ...);
extern void wr_basic_printf(const char *format, ...);
extern void wr_detail_printf(const char *format, ...);
#endif