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

        u = u-v;
    }
    return v;
}


// ex8
int gcd(int u, int v, int w) {
    return gcd(u, gcd(v, w));
}

int main() {
    int x , y ;
    while (scanf("%d%d", &x,&y) == 2) {
        printf("x = %d, y = %d, gcd = %d\n", x,y, gcd(x,y));
    }
    return 0;
}
