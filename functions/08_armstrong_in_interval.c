#include <stdio.h>

/**
 * get_num_of_digits, powers, sum_digits_power - helper functions for
 * is_armstrong function.
 */
int get_num_of_digits(int n){
        int cnt = 0;
        while (n != 0){
                cnt++;
                n = n / 10; // n /= 10;
        }
        return cnt;
}

int powers(int n, int pow){
        int power = 1;
        for(int i = 1; i <= pow; i++) {
                power = power * n;
        }
        return power;
}

int sum_digits_power(int num, int num_of_digits){
        int sum = 0;
        while (num != 0){
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

void print_armstrong(int start, int end){
    printf("Armstrong numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++){
        if (is_armstrong(i) == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
}


/************************************************/
// main program
int main(void) {
    int start, end;
    printf("Enter start and end of interval: ");
    if (scanf("%d %d", &start, &end) == 2) {
        print_armstrong(start, end);
    }
    return 0;
}

