#include<stdio.h>

void CheckEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The Number is odd");
    }
}
int main()
{
    int number = 0;

    printf("Enter the Number : ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}