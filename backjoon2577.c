#include<stdio.h>
int main()
{
    int a,b,c;
    int arr[10]={0};
    scanf("%d %d %d",&a,&b,&c);
    int total = a*b*c;
    while(total>0)
    {
        arr[total%10]++;

        total = total/10;
    }
    for(int i=0;i<=9;i++)
    {
        printf("%d\n",arr[i]);
    }
}