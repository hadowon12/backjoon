#include<stdio.h>
int main() {
    int s = 0, t = 0;
    int a;
    for (int i = 0; i < 4; i++) {
        scanf("%d ", &a);
        s += a;
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &a);
        t += a;
    }
    if (t > s || t == s)
        printf("%d", t);
    else if (s > t)
        printf("%d", s);
}