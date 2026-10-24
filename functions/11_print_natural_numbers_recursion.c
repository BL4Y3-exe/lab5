#include <stdio.h>


/**
 * print_natural - prints all natural numbers from 1 to n.
 * @current - current number to print.
 * @n - range.
 */
void print_natural(int current, int n){
    if (current > n) return;
    printf("%d ", current);
    print_natural(current + 1, n);
}


/************************************************/
// main program
int main(){
    int n, current = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 0){
        print_natural(current, n);
    }
    printf("\n");
    return 0;
}
