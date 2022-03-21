#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int gcd( int u,  int v) {
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
// (PolynomialGCD[g, g + 1] = 1)==(PolynomialGCD[t - 1,  1] = 1) == True
//   => {max(x,y): gcd(x,y) = 1} = (ULLONG_MAX, ULLONG_MAX-1) (commutative)
int main() {
    int x, y;
    x = INT_MAX;
    y = INT_MAX;
    while(gcd(x,y)!=1) {
        y--;
    }
    printf("gcd(%d,%d) = %d\n",x,y, gcd(x,y));
    return 0;
}
