#include<stdio.h>//어짜피 같은수 비교할거면 받는 족족 비교해도 상관이 없었다! 배열을 사용해서 일일히 비교하는거 보다 편하다!
int main()
{
    int count = 0,num,car;
    scanf("%d",&num);
    for(int i=0;i<5;i++) {
        scanf("%d", &car);
        if(car == num)
            count+=1;
    }
    printf("%d",count);
}