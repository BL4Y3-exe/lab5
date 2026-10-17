#include <stdio.h>


/**
 * max - finds maximum of two numbers.
 * @a - first number.
 * @b - second number.
 *
 * Return(int): biggest number.
 */
int max(int a, int b){
    if (a > b){
        return a;
    } else{
        return b;
    }
}


/**
 * min - finds minimum of two nubmers.
 * @a - first number.
 * @b - second number.
 *
 * Return(int): smallest number.
 */
int min(int a, int b){
    if (a < b){
        return a;
    } else{
        return b;
    }
}


//------------------------------------------------
// main program
int main(void) {
    int num1, num2;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) == 2) {
        printf("Maximum = %d\n", max(num1, num2));
        printf("Minimum = %d\n", min(num1, num2));
    }
    return 0;
}

