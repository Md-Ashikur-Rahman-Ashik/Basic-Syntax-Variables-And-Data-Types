#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char character1;

    printf("Enter a integer number, a float number, a character : ");
    scanf("%d %f %c", &num1, &num2, &character1);

    printf("The integer number is : %d\n", num1);
    printf("The float number is : %f\n", num2);
    printf("The character is : %c", character1);

    return 0;
}