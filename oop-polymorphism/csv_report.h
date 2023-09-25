#ifndef CSV_REPORT_H_
#define CSV_REPORT_H_

#include <report_base.h>
#include <stdbool.h>

typedef struct 
{
    report_base_t base;
} csv_report_t;


bool csv_report_init (csv_report_t *object);

#endif/* CSV_REPORT_H_ */
