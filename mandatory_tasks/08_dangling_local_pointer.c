#include <stdio.h>


int* local_variable(){
    int temp = 42; 
    return &temp;  // local variable stack memory is destroyed after returning.
}

int main(){
    int *p = local_variable();

    printf("%d\n", *p);

    return 0;
}


// Returning &temp creates a dangling pointer.
// Deferencing it creates undefined behavior.

// In my case:
// Compiler gives an warning, that function returns adress of local variable.
// In runtime gives an error: Address boundary error

