#include<stdio.h>
 int input_side()
{
    int a;
    scanf("%d",&a);
    return a;
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && a!=c && b!=a)
    {
        return 1;
    }
    return 0;
}
void output(int a, int b, int c, int isscalene)
{
if(isscalene==1)
{
    printf("triangle is scalene\n");
}else if(isscalene==0)
    printf("triangle is not scalene\n");
}
int main()
{
    int a,b,c,isscalene;
     printf("enter the side of a triangle\n");
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}