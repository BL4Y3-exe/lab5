#include <stdio.h>


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


void print_perfect(int start, int end){
    printf("Perfect numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++){
        if (is_perfect(i) == 1){
            printf("%d ", i);
        }
    }
    printf("\n");
}


/***********************************************/
// main program
int main(void) {
    int start, end;
    printf("Enter start and end of interval: ");
    if (scanf("%d %d", &start, &end) == 2) {
        print_perfect(start, end);
    }
    return 0;
}
