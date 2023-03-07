#include<stdio.h> //백준 1978 소수판별문제
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        for(int j=2;j<=b;j++)
        {
            if(j==b)
                c++;
            if(b%j==0)
                break;
        }
    }
    printf("%d",c);
}