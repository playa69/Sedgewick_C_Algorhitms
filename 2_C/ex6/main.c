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
        printf("u = %d, v = %d\n", u, v);
    }
    return v;
}


int main() {
    int x = 12345, y =56789;
    printf("x = %d, y = %d, gcd = %d\n", x,y, gcd(x,y));
    return 0;
}


//ex7: 8 iterations of while-loop in gcd(x,y) call
// if comp-statement x8 + 3x8 assignment statements in if +
//             + function printf x8 + x8 assignment statements + x1 return statemnt
// => 49 statements in one gcd() call
