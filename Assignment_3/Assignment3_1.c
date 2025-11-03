#include<stdio.h>

void PrintEven(int iNo)
{
   int iCount = 0;
   int iCnt = 0;

   for(iCount =2; iCount <= iNo*2 ; iCount++)
   {
    if(iCount % 2 ==0)
    {
        printf("%d \t",iCount);
    }
   }

}
    
int main()
{

    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}