#include <stdio.h>
int input()
{
    int a;
    printf("enter two numbers\n");
    scanf("%d",&a);
    return a;
}
int gcd(int a, int b)
{
    int gcd;
    for (int i=1;i<=a && i<=b; i++)
    {
        //checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    return gcd;
}
void output(int a,int b,int hcf)
{
    printf("gcd of %d and %d is %d",a,b,hcf);
}
int main()
{
    int a,b,hcf;
    a=input();
    b=input();
    hcf=gcd(a,b);
    output(a,b,hcf);
    return 0;
}
