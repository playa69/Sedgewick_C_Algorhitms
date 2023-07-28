#include <stdio.h>
#include <stdlib.h>

int main()
{
    //when printf("Hello world!\n") evaluates equals to 1
    if (0 || printf("Hello world!\n")) {
        printf("1\n");
    } else {
        printf("0\n");
    }


    int arr[] = {-10, -20, -3, -5, -7, -10, -2, -3, -5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);


    // arr[i] < 0 always true
    int i = 0;
    while (i < n && arr[i] < 0) {
        printf("%d ", arr[i]);
        ++i;
    }
    //when evaluates compilier goes in body of if-statement
    if(  printf("\nBye-bye") || 0/0 || 0/0);

    puts("");


    return 0;
}
