#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            printf("\n");
        else
            printf("%c", c);
    }
}

/*
Write a program tha prints its input one word per line.
Assumptions:
- input is a sentence, this means it consists of sequence of characters that are separated with exactly one space (blank)

- while loop (read the characters is sequence)
    - if character is blank
        - print a newline character
    - else
        - print current character
    - end
- end
*/