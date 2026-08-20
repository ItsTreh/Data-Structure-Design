#include <stdlib.h>
#include <stdio.h>

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

    return 0;
}
