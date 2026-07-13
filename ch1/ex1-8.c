#include <stdio.h>

int main(void)
{
    int c, blanks, tabs, newlines;

    newlines = 0;
    tabs = 0;
    blanks = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++newlines;
        else if (c == '\t')
            ++tabs;
        else if (c == ' ')
            ++blanks;
    }

    printf("tabs %d\nnewlines %d\nblanks %d\n", tabs, newlines, blanks);
}