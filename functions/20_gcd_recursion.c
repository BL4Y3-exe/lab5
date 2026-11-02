#include <stdio.h>


/**
 * gcd - finds the greatest common divisor of two numbers.
 * @a - first number.
 * @b - second number.
 *
 * Return(int): gcd of two numbers.
 */
int gcd(int a, int b){
    if (b == 0) return a;

    return gcd(b, a % b); // euclidead formula 
                          // (just learned that there was such method for gcd)
}


/************************************************/
// main program
int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
    }
    return 0;
}

