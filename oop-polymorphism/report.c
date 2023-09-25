#include <report.h>

void report_generate (report_base_t *base, const char *data)
{
    base->generate (data);
}