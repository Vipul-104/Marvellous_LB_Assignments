#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;  
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);
    printf("The summetion of NonFactors is :%d",iRet);

    return 0;
}