#include <stdio.h>

//Write a C program to find all prime numbers between 
//given interval using functions.


int is_prime(int x){
    for (int i = 2; i < x; i++){
        if (x % i == 0){
            return 0;
        }
    }
    return 1;
}


void print_primes(int start, int end){
    printf("Prime numbers betweem %d and %d:\n", start, end);
    for (int i = start; i <= end; i++){
        if (is_prime(i) == 1){
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
        print_primes(start, end);
    }
    return 0;
}

