#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);

    }
}

/*
The output of the program does not show backspace, because every backspace key hit on the keyboard, is intercepted by a terminal, and never reaches the program.
*/