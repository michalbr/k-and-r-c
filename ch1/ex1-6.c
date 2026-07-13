#include <stdio.h>

int main(void)
{
    printf("%d\n", getchar() != EOF);
}

/*
returns 0 when we use ctrl + D in terminal (Linux)
returns 1 on any other input
*/