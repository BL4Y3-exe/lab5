#include <stdio.h>

int main(){
    int x = 42;
    int *p = &x;

    printf("%d\n", x);
    *p = 100;
    printf("%d\n", x);

    return 0;
}

