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
    //����������� ������ �� ��� ���� t � x
    struct node *t, *x;

    puts("enter N and M:");
    scanf("%d%d", &N, &M);

    //�������� � ������ node �������� 1
    t = (struct node*) malloc(sizeof *t);
    t->key=1;
    //��������� ������ node
    x=t;
    //�������� ������ ������ � node �� 2 �� N
    for(i = 2; i<= N; i++) {
        t ->next = (struct node *) malloc(sizeof *t);
        t = t -> next;
        t ->key = i;
    }
    //����������� list
    t ->next = x;

    t = t->next;
    //printf("%d\n", t->key);
    puts("death order: ");
    //���� �� ��������� ���������
    while( t!= t->next) {
        // ������� �� (M-1)�� �����
        // (M-1) ��� .next
        // [1, M) = M - 1
        for(i = 1; i< M-1; i++)
            t= t->next;
        // t = the one before the killed one
        //��������� � (M)��� �����
        x = t->next;
        //������� (M)���
        printf("%d ", x->key);
        t->next = x->next;
        //������� ����� � (M)�� ������
        t = x->next;
        //������
        free(x); //x = gucci mane
    }
    //������� ����������
    printf("\nLast: % d\n", t->key);
    //�� �� �����
}
