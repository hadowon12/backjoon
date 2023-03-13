#include<stdio.h>
int main()
{
    int burger,drink=0,a=20000,total=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&burger);
        if(burger<a)
        {
            a=burger;
        }
    }
    total+=a;
    a=20000;
    for(int i=0;i<2;i++)
    {
        scanf("%d",&drink);
        if(drink<a)
        {
            a=drink;
        }
    }
    total+=a;
    printf("%d",total-50);
}