#include <stdio.h>

// gcc -Wall -o rename rename.c

int main(int argc, char** argv)
{
    printf("rename returned %d\n", rename("a", "b"));
    return 0;
}