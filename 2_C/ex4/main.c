#include <stdio.h>
#include <stdlib.h>


int convert(void) {
    int i = 0, x=0, arr[50];
    //streamline
    while(scanf("%d", &x)!=EOF) {
        arr[i] = x;
        i++;
    }

    int y=0;
    for(int k = 0; k <i; k++) {
        y+=arr[k]*(int)pow(10,i-k-1);
    }

    return y;
}


int main() {
    int t =  convert();
    printf("%d", t);
    return 0;
}
