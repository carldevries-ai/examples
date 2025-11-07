#include <stdio.h>
#include "file1.h"
#include "file2.h"

int main(int argc, char *argv[])
{
#if MYDEFINE
    foo();
#endif

    bar();
}

#if MYDEFINE
void foo()
{
    printf("foo\n");
}
#endif

void bar()
{
    printf("bar\n");
}