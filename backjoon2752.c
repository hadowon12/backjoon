#include<stdio.h> // 재귀함수를 기억하자 ㅋㅋ 역시 노가다해서 푸는건 그다지 감흥이 없다
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max =a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    int min =a;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    int mid;
    if(a!=max && a!=min)
        mid = a;
    if(b!=max && b!=min)
        mid = b;
    if(c!=max && c!=min)
        mid = c;
    printf("%d %d %d",min,mid,max);
}