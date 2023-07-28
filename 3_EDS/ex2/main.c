#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *next;
};

struct node *head, *z, *t, *x;

void movenexttofront(struct node *p) {
    struct node *g;
//    g = (struct node*)malloc(sizeof *g);
    g = p->next;

    p->next = p->next->next;
    g->next = head->next;
    //g->key = 0;
    head->next = g;
}

void exchange(struct node *m, struct node *n) {

    struct node *m1, *n1, *n2;
    //  m1 = (struct node*)malloc(sizeof *m1); n1 = (struct node*)malloc(sizeof *n1);
    //  n2 = (struct node*)malloc(sizeof *n2);

    // if(*n!=*m) соседние узлы?
    // if (m->next == n)
    // if (n->next == m)

    m1 = m->next;
    n1 = n->next;
    n2 = n->next->next;

    m->next = n1;
    n->next = m1;
    n1->next = m1->next;
    m1->next = n2;
}


int main() {
    head = (struct node *) malloc(sizeof *head);
    x = head;
    z = (struct node *) malloc(sizeof *z);
    t = (struct node*) malloc(sizeof *t);
    t->key=1;
    head->next = t;
    int N;
    scanf("%d", &N);
    int i;
    for(i = 2; i<= N; i++) {
        t ->next = (struct node *) malloc(sizeof *t);
        t = t -> next;
        t ->key = i;
    }
    t->next = z;
    z->next = z;
    //x = head->next;
    for(i = 1; i<= N; i++) {
        printf_s("%d\n", x->next->key);
        x = x->next;
    }

    for(struct node *ptr = head->next;
            ptr->next != ptr; ptr = ptr->next) {
        printf_s("%d ", ptr->key);
    }
    puts("");

    // x = head->next->next;
    x = head;

    struct node *x1 = head->next;
    struct node *x2 = head->next->next;


    //попробовать заюзать
    // movenexttofront(x);
    exchange(x1, x2);

    for(struct node *ptr = head->next;
            ptr->next != ptr; ptr = ptr->next) {
        printf_s("%d ", ptr->key);
    }
    puts("");

    return 0;
}
