#include <stdio.h>//단순한 계산문제 머리를 조금만 써도 간단히 풀리는 문제
int main()
{
    int A, B, V;
    int day;
    scanf("%d %d %d", &A, &B, &V);
    day = (V - B - 1) / (A - B) + 1;
    printf("%d", day);
}