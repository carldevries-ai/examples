#include <stdio.h>
#include "file3.h"

#if COMPILE_IN_ARRAY
int array[5000] = {0};
#endif

void fizz()
{
    const int num = 5;
    for(int i = 0; i < num; i++)
    {
        printf("fizz\n");
    }
}