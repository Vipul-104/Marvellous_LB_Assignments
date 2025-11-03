#include<stdio.h>

int FindMax(int a, int b)
{
    int Max = 0;
    if(a > b)
    {
        Max = a;
    }
    else
    {
        Max = b;
    }

    return Max;
}
int main()
{
    int num1, num2 = 0;
    int Result = 0;

    printf("Enter the first Number : ");
    scanf("%d", &num1);

    printf("Enter the second Number : ");
    scanf("%d", &num2);

    Result = FindMax(num1, num2);
    printf("Maximum Number is : %d\n",Result);

    return 0;
}