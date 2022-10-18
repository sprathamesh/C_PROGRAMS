//ASCII VALUES
//upper case start from 65 to 90 
//lower case start from 97 to 122

#include<stdio.h>
int main()
{
char ch;
printf("Enter A Character\n");
scanf("%c", &ch);
if (ch<=122 && ch>=97)
{
printf("It Is Lowercase");
}
else
{
printf("It Is Not Lowercase");
}
return 0;
}

	