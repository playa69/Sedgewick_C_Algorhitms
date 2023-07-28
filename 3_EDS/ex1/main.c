#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v) {
    int t;
    if(u == 0)
        return u;
    if(v == 0)
        return v;

    while(u>0) {
        if (u<v) {
            t = v;
            v = u;
            u = t;
        }
        u = u%v;
    }
    return v;
}

int main() {

    int i, j;
    int a[10][10];
    for(i = 1; i<=9; i++)
        for(j = 1; j<=9; j++)
            a[i][j] = 0;

    for(i = 1; i<=9; i++)
        for(j = 1; j<=9; j++)
            if(gcd(j, i)==1)
                a[i][j] = 1;

    for(i = 1; i<=9; i++) {
        for(j = 1; j<=9; j++)
            printf("%d", a[i][j]);
        puts("");
    }

    return 0;
}
