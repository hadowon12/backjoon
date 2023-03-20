#include<stdio.h>
int main()
{
    int a,total=1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        total=i*total;
    }
    printf("%d",total);
}