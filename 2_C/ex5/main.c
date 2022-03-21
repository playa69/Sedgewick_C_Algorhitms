#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void binary(int deci) {



    int power = 0;
    int degree = 1;
    // degree = 2^power
    // find max degree which <= x
    while(degree*2<=deci) {
        degree *= 2;
        power++;
    }
    for(int i = power; i>=0  ; --i) {
        printf("%d", (deci / degree)%2 );
        degree /= 2;
    }


}


int main() {
    int x;

    while(scanf("%d", &x)!=EOF) {
        binary(x);
        puts("");
    }

    return 0;
}
