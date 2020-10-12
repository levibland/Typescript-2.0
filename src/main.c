#include <stdio.h>

#include "include/tst.h"
#include "include/macros.h"

int main(int argc, char* argv[])
{
    if (argc < 2) {
        printf("Please specify input file.\n");
        return 1;
    }

    tst_compile_file(argv[1]);

    return 0;
}
