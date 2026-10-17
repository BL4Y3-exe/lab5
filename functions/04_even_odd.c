#include <stdio.h>


/**
 * even_odd - checks if number is even or odd.
 * @x - nubmer to check.
 *
 * Return(int): 0 if number is even and 1 if odd.
 */
int even_odd(int x){
    return (x % 2);
}


/************************************************/
// main program
int main(void) {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {
        if (even_odd(num) == 0) {
            printf("%d is Even.\n", num);
        } else {
            printf("%d is Odd.\n", num);
        }
    }
    return 0;
}
