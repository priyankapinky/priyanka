#include<stdio.h>
#include<conio.h> 
int main()
{
 char    str[100];
 int countDigits,countSpecialChar,countSpaces;
 int counter;
 countDigits=countAlphabet=countSpecialChar=countSpaces=0;
 printf("Enter a string: ");
gets(str);
for(counter=0;str[counter]!=NULL;counter++)
{
if(str[counter]>='0' && str[counter]<='9')
countDigits++;
else if(str[counter]==' ')
countSpaces++;
 else
 countSpecialChar++;
 }
 printf("\nDigits: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countSpaces,countSpecialChar);
return 0;
}
