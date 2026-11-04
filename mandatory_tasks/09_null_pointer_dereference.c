#include <stdio.h>


int main(){
    int *p = NULL;
    
    printf("%d\n", *p);
    return 0;
}

// Deferencing null causes undefined behavior.
// I got address boundary error.

