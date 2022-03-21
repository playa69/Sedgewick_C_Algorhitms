#include <stdio.h>

// Euclid's algorhitm: gcd(u,v) = gcd(v, u-v)

int gcd(int u, int v) {
    int t;
    while(u>0) {
        //inverse
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
    int x,y;
    while (scanf("%d%d", &x,&y) == 2){
        if(x>0 && y>0)
            printf("x = %d, y = %d, gcd~%d\n", x,y, gcd(x,y));
    }
    return 0;
}
