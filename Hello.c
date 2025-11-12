#include<stdio.h>

int main() {
    int num1, num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);

    int *x, *y;
    x = &num1;
    y = &num2;
    int t;
    t = *x;
    *x = *y;
    *y = t;

    printf("num1 = %d \n", *x);
    printf("num2 = %d \n", *y);
    
    return 0;
}