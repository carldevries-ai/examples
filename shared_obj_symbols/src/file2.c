#include <stdio.h>
#include "file2.h"

#if INCLUDE_FILETHREE
#include "file3.h"
#endif

int main(int argc, char *argv[])
{
#if INCLUDE_FILETWO
    foo();
#endif

    bar();

#if INCLUDE_FILETHREE
    fizz();
#endif
}

#if INCLUDE_FILETWO
void foo()
{
    printf("foo\n");
}
#endif

void bar()
{
    printf("bar\n");
}