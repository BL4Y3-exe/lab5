#include <stdio.h>


/**
 * power - calculates power of number.
 * @base - base of exponent number.
 * @exp - exponent.
 *
 * Return(int): value of expression.
 */
int power(int base, int exp){
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}


/***********************************************/
// main program
int main(void) {
    int base;
    int exp;
    printf("Enter base and exponent: ");
    if (scanf("%d %d", &base, &exp) == 2) {
        printf("%.d^%d = %.d\n", base, exp, power(base, exp));
    }
    return 0;
}

