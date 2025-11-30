//Pelosi Verifica 2
#include <stdio.h>

//#define DEBUG 0
#define DEBUG 1

#define FIB_MAX 10000


int fib_rec(int n) {

    switch (n) {
        case 0: return 0;
        case 1: return 1;
        default:

            #if (DEBUG)
            printf("+debug: fib_rec(%d)\n", n);
            #endif // DEBUG

            return fib_rec(n-1)+fib_rec(n-2);
    }

}

int fib_mem(int n, int memz[]) {


    switch (n) {
        case 0: return 0;
        case 1: return 1;
        default:
            if (memz[n] == 0) {

                #if (DEBUG)
                printf("+debug: fib_mem(%d)\n", n);
                #endif // DEBUG

                memz[n] = fib_mem(n-1, memz)+fib_mem(n-2,memz);
            }
            return memz[n];
    }

}



void do_fib_memoization(int m) {
    static int memz[FIB_MAX];
    printf("#> FIBONACCI: memoization, ...\n\n");

    for (int i = 0; i <= m; i++) {
        int f = fib_mem(i, memz);
        printf("F(%d) = %d \n", i, f);
    }

    printf("#> FIBONACCI: memoization, done.\n\n\n");

}

void do_fib_recursive(int m) {
    printf("#> FIBONACCI: recursive, ...\n\n");

    for (int i = 0; i <= m; i++) {
        int f = fib_rec(i);
        printf("F(%d) = %d \n", i, f);
    }

    printf("#> FIBONACCI: recursive, done.\n\n\n");
}


void do_fib_iterative(int m) {

    printf("#> FIBONACCI: iteractive, ...\n\n");

    int cont,fcurr,fprec,fprev;
    cont=2;
    fprev=0; /* F(0) = 0*/
    fprec=1; /* F(1) = 1*/
    while(cont<=m)
    {
        #if (DEBUG)
        printf("+debug: fib_iter(%d)\n", cont);
        #endif // DEBUG

        fcurr = fprec + fprev; /* F(n) = F(n-1) + F(n-2) */

        printf("F(%d) = %d \n", cont, fcurr);

        fprev = fprec; /* f(n-2) <- f(n-1) */
        fprec = fcurr; /* f(n-1) <- f(n) */
        cont++;
    }

    printf("#> FIBONACCI: iteractive, done.\n\n\n");
}

int get_fib_max() {
    int m;
    do
    {
        printf("\ninserire un numero intero maggiore di due e minore di %d, oppure 0: exit\n", FIB_MAX);
        scanf("%d",&m);
    } while((m !=0 && m<=2) || (m >=FIB_MAX));

    return m;
}

void main()
{
    int m = get_fib_max();

    if (m == 0) {
        return;
    }

    do_fib_iterative(m);
    do_fib_recursive(m);
    do_fib_memoization(m);

}
