#include <stdio.h>


/**
 * sum_of_digits - finds sum of digits of number.
 * @x - number.
 *
 * Return(int): sum of digits of number.
 */
int sum_of_digits(int x){
    if (x == 0) return 0;

    return (x % 10) + sum_of_digits(x / 10);
}


/************************************************/
// main program
int main(void) {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) == 1) {
        printf("Sum of digits = %d\n", sum_of_digits((num)));
    }
    return 0;
}

