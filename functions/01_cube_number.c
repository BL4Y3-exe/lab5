#include <stdio.h>


/**
 * cube - finds cube of passed number.
 * @x - integer number.
 *
 * Return: cube of number.
 */
int cube(int x){
    return (x * x * x);
}


//------------------------------------------------
// main program
int main(void) {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) == 1) {
        printf("Cube of %d = %d\n", num, cube(num));
    }
    return 0;
}

