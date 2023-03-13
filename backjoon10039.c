#include<stdio.h>
int main()
{
    int score,total=0; //꼭 꼭!!!!!! 토탈에는 0 넣어놓기
    for(int i=0;i<5;i++)
    {
        scanf("%d",&score);
        if(score<40)
            total+=40;
        else
            total+=score;
    }
    printf("%d",total/5);
}