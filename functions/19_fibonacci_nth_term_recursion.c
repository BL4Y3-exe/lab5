#include <stdio.h>


/**
 * fibonacci - find x-th element in fibonacci's sequence.
 * @x - number of term in sequence.
 *
 * Return(int): x-th element in fibonacci's sequence.
 */
long long fibonacci(int x){
    if (x <= 0) return 0;
    if (x <= 1) return 1;

    return fibonacci(x - 1) + fibonacci(x - 2);
}


/************************************************/
// main program
int main(void) {
    int n;
    printf("Enter term position (n >= 0): ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        printf("Fibonacci term %d = %lld\n", n, fibonacci(n));
    }
    return 0;
}

