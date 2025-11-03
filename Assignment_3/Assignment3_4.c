#include<stdio.h>

void DisplayConvert(char Cvalue)
{
    if(Cvalue >= 'a' && Cvalue <= 'z' )
    {
        Cvalue = Cvalue - 32;
        printf("%c",Cvalue);

    }
    else if(Cvalue >= 'A' && Cvalue <= 'Z')
    {
        Cvalue = Cvalue + 32;
        printf("%c",Cvalue);
    }
    else
    {
        printf("Invalid Character !!");
    }
  
}
    
int main()
{

    char cValue;
    printf("Enter the character :");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}