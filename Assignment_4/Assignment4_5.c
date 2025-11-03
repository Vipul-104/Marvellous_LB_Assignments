#include<stdio.h>

int FactDiff(int iNo)
{
    int iFSum = 0;
    int iCnt = 0;
    int iNSum = 0;
    int iCount = 0;
    int factdiff = 0;
    
 
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iNSum = iNSum + iCnt;  
        }
    }
    for(iCount = 1; iCount <= iNo/2; iCount++)
    {
        if(iNo % iCount == 0)
        {
            iFSum = iFSum + iCount;  
        }
    }
    factdiff = iFSum - iNSum;
    return factdiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("The Difference in summetion is :%d",iRet);

    return 0;
}