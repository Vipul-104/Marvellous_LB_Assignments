#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter teh number :");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet == true)
    {
        printf("The number Divisible by 5"),bRet;
    }
    else
    {
        printf("The number is not Divisible by 5"),bRet;
    }
    

    return 0;
}
