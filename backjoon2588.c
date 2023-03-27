#include<stdio.h>//나누기 기호는 .......어렵음.....가끔식 이해가 안되;;
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c,d,e;
    c = a * (b % 10);
    d = a * (b /10 %10);
    e = a * (b / 100);
    printf("%d\n%d\n%d\n%d",c,d,e,(a*b));
}