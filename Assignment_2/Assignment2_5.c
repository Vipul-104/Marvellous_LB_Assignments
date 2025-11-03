#include<stdio.h>
#include<stdbool.h>

bool ChkEven( int iNo)
{
    if((iNo % 2) == 0)
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
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == true)
    {
        printf("The number is Even");
    }
    else
    {
       printf("The Number is Odd");
    }
    

    return 0;
}