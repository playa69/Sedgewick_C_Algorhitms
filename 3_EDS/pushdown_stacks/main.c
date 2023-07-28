#include <stdio.h>
#include <stdlib.h>

//za4em stati4
static struct node {
    int key;
    struct node *next;
};

static struct node *head, *z, *t;

void stackinit() {
    head = (struct node *)malloc(sizeof *head);
    z = (struct node *)malloc(sizeof *z);
    head->next = z;
    head->key = 0;
    z->next = z;
}

void push(int v) {
    t = (struct node*)malloc(sizeof *t);

    t ->key = v;

    //(*t).next == (*head).next
    t ->next = head->next;
    head->next = t;
    // head -> t-> t1 -> z i.e. <push t(v)>
}

int pop() {
    int x;
    t = head->next;

    head->next = t->next;
    // head -> t -> z       ??
    //или
    // (*t).next == (*head).next

    x = t->key;
    free(t);

    return x;
}

int stackempty() {
    return head->next == z;
}

int main() {
    stackinit();

    /* if(stackempty) {
         push(5);
         push(9);
         push(pop()+pop());
         printf("%d\n", pop());
     } */
    push(5);
    push(9);
    push(pop()+pop());
    printf("%d\n", pop());



    return 0;

}
