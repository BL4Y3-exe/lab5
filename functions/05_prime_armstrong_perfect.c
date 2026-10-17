#include <stdio.h>


/**
 * is_prime - checks if number is prime or not.
 * @x - integer number.
 *
 * Return(int): 1 if number is prime and 0 if it is not.
 */
int is_prime(int x){
    for (int i = 2; i < x; i++){
        if (x % i == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}


//------------------------------------------------
/**
 * get_num_of_digits, powers, sum_digits_power - helper functions for
 * is_armstrong function.
 */
int get_num_of_digits(int n) {
        int cnt = 0;
        while (n != 0) {
                cnt++;
                n = n / 10; // n /= 10;
        }
        return cnt;
}

int powers(int n, int pow) {
        int power = 1;
        for(int i = 1; i <= pow; i++) {
                power = power * n;
        }
        return power;
}

int sum_digits_power(int num, int num_of_digits) {
        int sum = 0;
        while (num != 0) {
                int rem = num % 10;
                int p = powers(rem, num_of_digits);
                sum += p;
                num = num / 10;
        }
        return sum;
}


/**
 * is_armstrong - checks if number is armstrong number or not.
 * @x - integer number.
 *
 * Return(int): 1 if number is armstrong number and 0 if it is not.
 */
int is_armstrong(int x){
    if (x == sum_digits_power(x, get_num_of_digits(x))){
        return 1;
    } else{
        return 0;
    }
}


//------------------------------------------------
/**
 * sum_of_divisors - helper function for is_perfect function.
 */
int sum_of_divisors(int num){
    int sum = 0;

    for (int i = 1; i < num; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    return sum;
}


/**
 * is_perfect - checks if number is perfect or not.
 * @x - integer number.
 *
 * Return(int): 1 if number is perfect and 0 if it is not.
 */
int is_perfect(int x){
    if (x == sum_of_divisors(x)){
        return 1;
    } else{
        return 0;
    }
}


//------------------------------------------------
// main program
int main(void) {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) == 1) {
        printf("%d is %sPrime.\n", num, is_prime(num) ? "" : "NOT ");
        printf("%d is %san Armstrong number.\n", num, is_armstrong(num) ? "" : "NOT ");
        printf("%d is %sa Perfect number.\n", num, is_perfect(num) ? "" : "NOT ");
    }
    return 0;
}

