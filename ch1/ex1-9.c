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
}


/*
- declare prev variable to int
- initialize prev to 0
- get a character and save it into variable c
    - if prev does not equal blank
        - print curernt character
    - save current character to prev
    - this is test line for commit
*/