#include <stdio.h>
#include <stdlib.h>

struct fraction {
    int numerator;      // struct members // struct fields
    int denominator;
};

int great_common_divisor(int u, int v) {
    int t;
    while(u>0) {
        //inverse
        if (u<v) {
            int t;
            t = v;
            v = u;
            u = t;
        }
        u = u%v;
    }
    return v;
}

struct fraction reduce_frac(struct fraction u) {
    int g = great_common_divisor(u.numerator, u.denominator);
    struct fraction reduced;
    reduced.numerator = u.numerator / g;
    reduced.denominator = u.denominator / g;

    return reduced;
};

void reduce_inplace(struct fraction *pu) {
    int g = great_common_divisor((*pu).numerator, (*pu).denominator);
    pu->numerator /= g;
    pu->denominator /= g;

    printf("%d/%d\n", pu->numerator, pu->denominator);
};

int main()
{
    struct fraction u;

    // (u, v) = g
    // (u/g, v/g) = 1

    u.numerator = 30;
    u.denominator = 72;

    // struct fraction reduced = reduce_frac(u);
    reduce_inplace(&u);
    printf("%d/%d\n", u.numerator, u.denominator);


    return 0;
}
