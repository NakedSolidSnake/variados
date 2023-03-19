#include <dlfcn.h>
#include <stdio.h>

#define LIBM_PATH "/lib/x86_64-linux-gnu/libm-2.31.so"
#define LIBM_COS  "cos"

double (*my_cos) (double value);

int main (int argc, char *argv)
{
    void *handle;

    handle = dlopen (LIBM_PATH, RTLD_LAZY);

    if (handle != NULL)
    {
        my_cos = dlsym (handle, LIBM_COS);

        printf ("cos (0.5) = %.2lf\n", my_cos (0.5));

        dlclose (handle);
    }

    return 0;
}