#include <stdio.h>


/**
 * power - calculates power of number.
 * @base - base of exponent number.
 * @exp - exponent.
 *
 * Return(int): value of expression.
 */
double power(double base, int exp){
    if (exp == 0) return 1;
    if (exp < 0) return 1 / base * power(base, -exp);
    return base * power(base, exp - 1);
}


/***********************************************/
// main program
int main(void) {
    double base;
    int exp;
    printf("Enter base and exponent: ");
    if (scanf("%lf %d", &base, &exp) == 2) {
        printf("%.2lf^%d = %.4lf\n", base, exp, power(base, exp));
    }
    return 0;
}

