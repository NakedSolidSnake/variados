#include <pdf_report.h>
#include <stdio.h>


static void pdf_generate (const char *data)
{
    printf ("PDF Report Generated: %s\n", data);
}

bool pdf_report_init (pdf_report_t *object)
{
    bool status = false;

    if (object != NULL)
    {
        object->base.generate = pdf_generate;

        status = true;
    }

    return status;
}