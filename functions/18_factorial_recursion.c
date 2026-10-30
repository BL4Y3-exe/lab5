#include <stdio.h>


/**
 * factorial - finds factorial of a number.
 * @x - number of which factorial is found.
 *
 * Return(int): factorial of number.
 */
unsigned long long factorial(int x){
    if (x <= 1) return 1;

    return x * factorial(x - 1);
}


/************************************************/
// main program
int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        printf("%d! = %llu\n", n, factorial(n));
    }
    return 0;
}


// Note
/**
 * In task it says to write program that finds factorial of any number,
 * but since we have fixed memory size of variable and factorial is growing
 * very fast in this program maximum number of which factorial is possible to find
 * is 20, after that it exceeds the size of <unsigned long long> (64 bits on my machine)
 */

