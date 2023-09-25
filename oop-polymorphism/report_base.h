#ifndef REPORT_BASE_H_
#define REPORT_BASE_H_

typedef struct 
{
    void (*generate) (const char *data);
} report_base_t;

#endif/* REPORT_BASE_H_ */
