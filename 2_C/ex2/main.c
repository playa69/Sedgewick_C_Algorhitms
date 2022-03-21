#include <stdio.h>
#include <stdlib.h>

int main() {
    int u = -1; int v = -4;
    for (; v>-236; v-=1, u-=2) {
        printf("for %d and %d %d\n", u, v, u%v);
    }
    return 0;
}
