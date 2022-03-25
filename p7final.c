#include<stdio.h>
typedef struct Triangle
{
float base,altitude,area;
}Triangle;
Triangle input_triangle()
{
    Triangle t;
    printf("enter the base and height of triangle\n");
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    t->area=(t->base * t->altitude)/2;
}
void output(Triangle t)
{
    printf("ther area of triangle with base=%.2f and altitude=%.2f is %.2f",t.base,t.altitude,t.area);
}
int main()
{
 Triangle t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}