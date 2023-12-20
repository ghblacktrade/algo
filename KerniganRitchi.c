#include <stdio.h>

//int main()
//{
//    float fahr, celsius;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = lower;
//    while (fahr <= upper) {
//        celsius = 5.0 * (fahr - 32.0)/9.0;
//        printf ("%3.0f %6.1f\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}

#define LOWER 0
#define UPPER 300
#define STEP 20

//int main()
//{
//    int fahr;
//    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
//        printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
//}

//int main()
//{
//    int c;
//    c = getchar();
//
//    while (c != EOF) {
//        putchar (c);
//        c = getchar();
//    }
//}

//int main()
//{
//    double nc;
//    for (nc = 0; getchar() != EOF; nc++)
//        ;
//    printf ("%.0f\n", nc);
//}

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;

        if (c == "" || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
        printf ("%d %d %d\n", nl, nw, nc);
}