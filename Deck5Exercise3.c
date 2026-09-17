/*Implements a swap function capable of exchanging the value between two 32-bit integers a, b received.
Test that the function is correct with a = 35, b = 40.*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 35;
    int b = 40;

    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("a = %d, b = %d", a, b);

    return 0;
}