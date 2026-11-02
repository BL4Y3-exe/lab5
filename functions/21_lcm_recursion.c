#include <stdio.h>


// func to find gcd of two numbers.
int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}


/**
 * lcm - finds lowest common multiplier of two numbers.
 * @a - first number.
 * @b - second number.
 *
 * Return(int): lcm of two numbers.
 */
int lcm(int a, int b){
    if (a == 0 || b == 0) return 0;
    return ((a*b) / gcd(a, b));
}


/***********************************************/
// main program
int main(void) {
    int a, b;
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        printf("LCM of %d and %d = %d\n", a, b, lcm(a, b));
    }
    return 0;
}

