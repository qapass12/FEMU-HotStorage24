
#ifndef __FEMU_VAR_H
#define __FEMU_VAR_H

#define hotstorage_basic_log 1
#define hotstorage_detailed_log 0

extern int *pecycle;
extern void basic_printf(const char *format, ...);
extern void detail_printf(const char *format, ...);

#endif