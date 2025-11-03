#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 == 0)
    {
        printf("This is the leap year");
    }
    else
    {
        printf("This is not the leap year");
    }
    
}
int main()
{
    int yr = 0;

    printf("Enter the year :");
    scanf("%d",&yr);

    CheckLeapYear(yr);
    return 0;
}