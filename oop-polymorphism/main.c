#include <report.h>
#include <csv_report.h>
#include <pdf_report.h>

int main (int argc, char *argv[])
{
    csv_report_t csv;
    pdf_report_t pdf;

    csv_report_init (&csv);
    pdf_report_init (&pdf);

    report_generate (&csv, "Content");
    report_generate (&pdf, "Content");

    return 0;
}