/*Implement a toUnit function that receives a 2D vector V (structure with 2 float attributes)
and converts it into a unit vector:

Unit(V) = V / |V|

If invoked with V = {3.0, 4.0}, it becomes {0.6, 0.8}. Check the above.*/
#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Vec2D;

void toUnit(Vec2D *v)
{

    float mag = sqrt((v->x * v->x) + (v->y * v->y));
    printf("magnitude = %.3f\n", mag);

    v->x = v->x / mag;
    v->y = v->y / mag;
}

int main()
{

    Vec2D v = {3.0, 4.0};
    toUnit(&v);

    printf("%.3f, %.3f", v.x, v.y);

    return 0;
}