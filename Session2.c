#include <stdlib.h>
#include <stdio.h>

void duplicate(int x)
{
    x *= 2;
    return;
}

int duplicar2(int x)
{
    return x * 2;
}

void duplicateByReference(int *x)
{
    *x *= 2;
    return;
}

int main()
{

    typedef struct
    {
        float x;
        float y;
    } Vec2;

    Vec2 myVec = {3, 4};

    Vec2 *myVecPointer;

    myVecPointer = &myVec;

    myVec.x = 5;
    myVec.y = 6;

    printf("myVec {x: %.2f, y: %.2f}\n", myVec.x, myVec.y);

    (*myVecPointer).x = 7;
    (*myVecPointer).y = 8;

    printf("myVec {x: %.2f, y: %.2f}\n", myVec.x, myVec.y);

    myVecPointer->x = 9;
    myVecPointer->y = 10;

    printf("myVec {x: %.2f, y: %.2f}\n", myVec.x, myVec.y);

    int myInt = 2;

    duplicate(myInt);

    printf("%d\n", myInt);

    myInt = duplicar2(myInt);

    printf("%d\n", myInt);

    duplicateByReference(&myInt);

    printf("%d\n", myInt);

    int *myIntPointer = &myInt;
    duplicateByReference(myIntPointer);

    printf("%d\n", myInt);

    return 0;
}
