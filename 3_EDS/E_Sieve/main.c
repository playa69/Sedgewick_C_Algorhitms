#include <stdio.h>
#include <stdlib.h>
#define N 1000
int main()
{
    int i, j, a[N+1]; // why N+1
    //a[0] undefined
    a[1]=0;
    //make all ints to 1(True) in range 2 to 100
    for(i = 2; i<=N; i++)
        a[i] = 1;
    //delete non-primes
    for(i=2; i<= N/2; i++)
        for(j=2; j <= N/i; j++)
            a[i*j] = 0;  //i*j = not  prime (FTA)
    //printing
    for(i = 1; i <= N; i++)
        if (a[i]) //if a[i] == true
            printf("%4d", i);
    printf("\n");
    return 0;
}
