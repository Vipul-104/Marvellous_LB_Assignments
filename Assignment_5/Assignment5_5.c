#include<stdio.h>

int FindMax(int a, int b, int c)
{
    int Max = 0;
    if(a > b)
    {
        if (a >= c)
            Max = a;
        else
           Max = c;
    }
    else
    {
        if (b >= c)
            Max = b;
        else
            Max = c;

    }

    return Max;
}
int main()
{
    int num1, num2,num3 = 0;
    int Result = 0;

    printf("Enter the first Number : ");
    scanf("%d", &num1);

    printf("Enter the second Number : ");
    scanf("%d", &num2);

    printf("Enter the second Number : ");
    scanf("%d", &num3);

    Result = FindMax(num1, num2, num3);
    printf("Maximum Number is : %d\n",Result);

    return 0;
}