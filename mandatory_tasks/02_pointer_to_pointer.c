#include <stdio.h>

int main(){
    int x1 = 67;
    int x2 = 69;

    int *p = &x1;
    int **ptp = &p;

    *ptp = &x2;
    printf("%d\n", *p);

    **ptp = 42;
    printf("%d\n", x2);

    return 0;
}
