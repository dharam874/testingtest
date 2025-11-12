#include<stdio.h>

void swap(int *, int *);

int main() {
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);

    swap(&num1, &num2);
    printf("num1 = %d  num2 = %d", num1, num2);
    
    return 0;
}

void swap(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}