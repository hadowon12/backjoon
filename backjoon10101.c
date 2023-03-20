#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int all=a+b+c;
    if(a==60 && b==60 && c==60)
        printf("Equilateral");
    else if(all==180 && (a==b||b==c||c==a))
        printf("Isosceles");
    else if(all==180)
        printf("Scalene");
    else
        printf("Error");
}