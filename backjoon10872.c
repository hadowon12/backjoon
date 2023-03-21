#include<stdio.h>//자기자신을 곱하는건 기호가 뭐더라....
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