#include <stdio.h>


// calculates factorial of number.
int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++) fact *= i;
    return fact;
}


/**
 * is_stron_num - checks if number is strong or not.
 * @x - integer number.
 *
 * Return(int): 1 if number is strong and 0 of it is not.
 */
int is_strong_num(int x){
    int last_digit;
    int sum = 0;
    int tmp = x;
    while (tmp != 0){
        last_digit = tmp % 10;
        sum += (factorial(last_digit));
        tmp = tmp / 10;
    }
    if (x == sum){
        return 1;
    }
    return 0;
}


// prints strong numbers in interval.
void print_strong_nums(int start, int end){
    printf("Strong numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++){
        if (is_strong_num(i) == 1){
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
    scanf("%d %d", &start, &end);
    print_strong_nums(start, end);
    return 0;
}

