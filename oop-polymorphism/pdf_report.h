#ifndef PDF_REPORT_H_
#define PDF_REPORT_H_

#include <report_base.h>
#include <stdbool.h>

typedef struct 
{
    report_base_t base;
} pdf_report_t;


bool pdf_report_init (pdf_report_t *object);

#endif/* PDF_REPORT_H_ */
