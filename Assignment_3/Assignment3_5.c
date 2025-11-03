#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char Cvalue)
{
   if(Cvalue == 'a' || Cvalue == 'e' || Cvalue == 'i' || Cvalue == 'o' ||  Cvalue == 'u'  )
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

    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :");
    scanf("%c",&cValue);

     bRet = ChkVowel(cValue);
    if(bRet == true)
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("it is not Vowel");
    }

    return 0;
}