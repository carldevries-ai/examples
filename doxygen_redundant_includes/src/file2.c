#include <stdio.h>
#include "file1.h"
#include "file2.h"

#if DOXY_PREDEFINED
#include "file3.h"
#endif

int main(int argc, char *argv[])
{
#if MYDEFINE
    foo();
#endif

    bar();

#if DOXY_PREDEFINED
    fizz();
#endif
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