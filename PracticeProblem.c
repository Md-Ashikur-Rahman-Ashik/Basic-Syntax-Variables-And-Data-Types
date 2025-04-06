#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("After reversing the order :\n The first number is %d\n The second number is %d", num2, num1);

    return 0;
}