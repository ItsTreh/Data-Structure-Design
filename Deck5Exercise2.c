/*Implements a length function that returns the size of a text string, given by a character arrangement.
Number of characters that precede the string end character.
External functions (strlen) are not allowed to be used. It is also not allowed to use chaplets [].
The call to length ("hello world") must return 11.*/
#include <stdio.h>
#include <stdlib.h>

int length(char *CharPointer)
{

    int counter = 0;
    while (*CharPointer != '\0')
    {
        CharPointer++;
        counter++;
    }
    return counter;
}

int main()
{

    printf("%d\n", length("Hello World"));
    return 0;
}