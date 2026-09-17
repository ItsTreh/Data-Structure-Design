#include <stdlib.h>
#include <stdio.h>

// Create a variable p1 that points to a 64 - bit real number r1 with an initial value of - 7.528.
// Print the value of p1 and its memory address to the console.
// Divide the value pointed by p1 by two.
// Create an array a1 with a capacity of 100 16-bit integers, each initialized to 0.
// Create a variable p3 that points to the 3rd element of a1 and assign it the value 8.

int main()
{

    // Create a variable p1 that points to a 64 bit real number r1 with an inital value of -7.528
    double *p1;
    double r1 = -7.528;

    p1 = &r1;

    // Print the value of p1 and its memory address to the console
    // At first I had an error cause i did %d, but hey im surprised i actually did it right
    printf("value: %p, \n address: %p\n", p1, &p1);

    // Divide the value pointed by p1 by two
    // In here what I did was simply taking what p1 is pointing at which is *p1, dividing it but also saving it with =
    *p1 /= 2;

    // I'm gonna create a printf just to check the division
    // In here we need to use %f because if we did %p, it would've come out as hexadecimal like before
    printf("%f\n", *p1);

    // Create an array a1 with a capacity of 100 16-bit integers, each initiliazed to 0.
    short a1[100] = {0};

    // Create a variable p3 that points to the 3rd element of a1 and assign it the value 8.
    short *p3 = &a1[2];
    *p3 = 8;
}