#include <stdio.h>


/**
 * print_even_odd - prints all even or odd numbers in range.
 * @current - current number.
 * @end - range.
 * @choice - even or odd.
 */
void print_even_odd(int current, int end, int choice){
    if (current > end) return;

    if (current % 2 == 0 && choice == 0){
        printf("%d ", current);
    } else if (current % 2 != 0 && choice == 1){
        printf("%d ", current);
    }
    print_even_odd(current + 1, end, choice);
}


/************************************************/
// main program
int main(){
    int start, end, choice;

    printf("Enter start and end: ");
    if (scanf("%d %d", &start, &end) == 2){
        printf("Enter choice (0 for Even or 1 for Odd): ");
        if (scanf("%d", &choice) == 1){
            if (choice == 0){
                printf("All Even numbers from %d to %d: ", start, end);
                print_even_odd(start, end, 0);
                printf("\n");
            } else if(choice == 1){
                printf("All Odd number from %d to %d: ", start, end);
                print_even_odd(start, end, 1);
                printf("\n");
            }
        }
    }
}
