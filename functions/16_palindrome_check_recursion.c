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


/**
 * is_palindrome - checks if number is palindrome or not.
 * @x - number to check.
 *
 * Return(int): 1 if number is palindrome and 0 if it is not.
 */
int is_palindrome(int x){
    if (x == reverse_number(x, 0)){
        return 1;
    } else {
        return 0;
    }
}


/************************************************/
// main program
int main(void) {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) == 1) {
        if (is_palindrome(num)) {
            printf("%d is a Palindrome.\n", num);
        } else {
            printf("%d is NOT a Palindrome.\n", num);
        }
    }
    return 0;
}

