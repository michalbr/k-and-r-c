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
Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

Assumptions:
- whitespace characters in input string are spaces and newlines
- max word size is 9


- define IN = 0; OUT = 1
- declare c, charcount, state to int
- declare freq[10] to int
- intialize each element of freq to 0
- initialize charcount = 0
- initialize state = OUT

== build histogram ==
- go sequentially through the each character [c] of input
    - if (c is a space or newline)
        - if (state equals IN)
            - ++freq[charcount]
            - charcount = 0
            - state = OUT
    - else
        - ++charcount
        - state = IN
    - end
- end


== print histogram ==
- iterate over array elements
    - print value at each index

 sdf  sdf

*/