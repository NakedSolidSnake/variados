#include <csv_report.h>
#include <stdio.h>


static void csv_generate (const char *data)
{
    printf ("CSV Report Generated: %s\n", data);
}

bool csv_report_init (csv_report_t *object)
{
    bool status = false;

    if (object != NULL)
    {
        object->base.generate = csv_generate;

        status = true;
    }

    return status;
}