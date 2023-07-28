#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int key[MAX+2], next[MAX+2];

int x, head, z;

void listinitialize(){
    head = 0;
    z = 1;
    x = 2;

    next[head] = z;
    next[z] = z;
}

void deletenext(int t){
    //         i              next
    //         t              next[t]
    // x - 1 = next[t]        next[next[t]]

    int deleted = next[t];

    next[t] = next[deleted];
    if (deleted == x - 1)
        --x;
    else {
        for (int j = 0; j != x; ++j)
            if (j[next] == x - 1)
                j[next] = deleted;
        key[deleted] = key[x - 1];
        next[deleted] = next[x - 1];
        --x;
    }
}

int insertafter(int v, int t){
    key[x] = v;
    next[x] = next[t];
    next[t] = x;
    //возрващаем индекс?
    return x++;
}

void print() {
    for(int r = next[head];
            next[r] != r; r = next[r]) {
        printf("%d ", key[r]);
    }
    puts("");
}


void print_debug() {
    printf("DEBUG x = %x\n", x);
    for(int i = 0; i != x; ++i) {
        printf("%5d%5d%5d", i, key[i], next[i]);
        if (i == head)
            printf("\thead");
        if (i == z)
            printf("\tz");

        puts("");
    }
    print();
}

int main()
{
    listinitialize();

    print_debug();
    int five = insertafter(5,0);
    print_debug();
    int buba = insertafter(69, five);
    print_debug();
    int lox = insertafter(107, buba);
    print_debug();
    for (int i = 0; i != 3; ++i)
        insertafter(i, 0);

    print_debug();
    deletenext(five);
    print_debug();
    deletenext(head);
    print_debug();
    deletenext(head);
    print_debug();
    deletenext(head);
    print_debug();

    insertafter(777, 0);
    print_debug();
    deletenext(head);
    print_debug();
    deletenext(head);
    print_debug();



    /*
    for(int  r = ??;
            key[next[head]] != 1; head = next[head]) {
        printf_s("%d ", next[head]);
    }
    */

    /*printf("%d, %d, %d, %d", key[next[head]],
           key[next[next[head]]],key[next[next[next[head]]]],
            key[next[next[next[next[head]]]]] );
            */
    return 0;
}
