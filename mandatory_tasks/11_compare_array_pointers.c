#include <stdio.h>


int *lower_index(int *p1, int *p2){
    if(p1 < p2){
        return p1;
    } else {
        return p2;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int *p1 = &arr[1];
    int *p2 = &arr[4];

    int *lower = lower_index(p1, p2);

    printf("Pointer pointing to lower index has value: %d\n", *lower);

    return 0;
}

