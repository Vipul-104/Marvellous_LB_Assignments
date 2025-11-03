#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int Multi = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            Multi = Multi * iCnt;
        }
    }

    return Multi;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}
