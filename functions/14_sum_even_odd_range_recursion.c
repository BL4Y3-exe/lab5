#include <stdio.h>


/**
 * sum_even_odd - finds sum of all even or odd numbers in a range.
 * @current - current number.
 * @end - end of range.
 * @choice - 0 for even, 1 for odd.
 *
 * Return(int): sum of all even or odd numbers in a range.
 */
int sum_even_odd(int current, int end, int choice){
    if (current > end) return 0;

    if (current % 2 == 0 && choice == 0){
        return (current + sum_even_odd(current + 1, end, choice));
    } else if (current % 2 != 0 && choice == 1){
        return (current + sum_even_odd(current + 1, end, choice));
    }

    return sum_even_odd(current + 1, end, choice);
}


/************************************************/
// main program
int main(void) {
    int start, end, choice;
    printf("Enter start and end range: ");
    if (scanf("%d %d", &start, &end) == 2) {
        printf("Choose option (0 for Even, 1 for Odd): ");
        if (scanf("%d", &choice) == 1) {
            long long total = sum_even_odd(start, end, choice);
            printf("Sum of %s numbers = %lld\n", choice ? "odd" : "even", total);
        }
    }
    return 0;
}

