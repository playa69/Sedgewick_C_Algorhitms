#include <stdio.h>
#include <stdlib.h>


struct node {
    int key;
    struct node *next;
    struct node *back;
};

int main() {
    // N - amount of warriors
    // M th person is going to suicide
    int i, N, M;
    //декларируем адреса на два узла t и x
    struct node *t, *x;

    puts("enter N and M:");
    scanf("%d%d", &N, &M);

    //помещаем в первый node значение 1
    t = (struct node*) malloc(sizeof *t);
    t->key=1;
    //фиксируем первый node
    x=t;
    //помещаем номера войнов в node от 2 до N
    for(i = 2; i<= N; i++) {
        t ->next = (struct node *) malloc(sizeof *t);
        t = t -> next;
        t ->key = i;
    }
    //зацикливаем list
    t ->next = x;

    t = t->next;
    //printf("%d\n", t->key);
    puts("death order: ");
    //пока не останется последний
    while( t!= t->next) {
        // доходим до (M-1)го война
        // (M-1) раз .next
        // [1, M) = M - 1
        for(i = 1; i< M-1; i++)
            t= t->next;
        // t = the one before the killed one
        //фиксируем в (M)ого война
        x = t->next;
        //принтим (M)ого
        printf("%d ", x->key);
        t->next = x->next;
        //убираем связь с (M)ым войном
        t = x->next;
        //чистим
        free(x); //x = gucci mane
    }
    //принтим последнего
    printf("\nLast: % d\n", t->key);
    //то же самое
}
