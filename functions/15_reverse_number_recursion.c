#include <stdio.h>


/**
 * reverse_number - finds reverse of number.
 * @x - number of which reverse is being found.
 * @reverse - reversed number.
 *
 * Return(int): reversed number.
 */
int reverse_number(int x, int reverse){
    if (x == 0) return reverse;

    return reverse_number(x / 10, (reverse * 10) + (x % 10));
}


/************************************************/
// main program
int main(void) {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) == 1) {
        int rev = reverse_number(num, 0);
        printf("Reverse of %d = %d\n", num, rev);
    }
    return 0;
}

