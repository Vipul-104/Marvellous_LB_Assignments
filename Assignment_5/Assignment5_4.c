#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("This number is positive");
    }
    else if(num < 0)
    {
        printf("This number is negative");
    }
    else
    {
        printf("The number is zero");
    }
    
}
int main()
{
    int number = 0;

    printf("Enter the number :");
    scanf("%d",&number);

    CheckNumberType(number);
    return 0;
}