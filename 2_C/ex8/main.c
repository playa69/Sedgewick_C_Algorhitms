#include <stdio.h>
#include <iso646.h>


int gcd(int u, int v, int w) {
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
    // v =gcd(u,v)
    while(v>0) {
        //inverse
        if (v<w) {
            t = w;
            w = v;
            v = t;
        }
        v = v%w;
    }
    return w;
}

int main() {
    int x,y,z;
    while(scanf("%d%d%d", &x,&y,&z)==3 ) {
        if(x>0 and y>0 and z>0) {
            printf("gcd(%d,%d,%d) = %d\n", x,y,z, gcd(x,y,z));
        }
    }
    return 0;
}
