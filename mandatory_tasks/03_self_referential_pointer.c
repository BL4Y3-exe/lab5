#include <stdio.h>

int main(){
    void *p = NULL; 
    p = &p;
    /**
     * type of this pointer is void,
     * since a void pointer can store address of any data type.
     */

    printf("%p\n", (void *)&p);
    printf("%p\n", p);
    return 0;
}

