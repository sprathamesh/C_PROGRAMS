// leap year or not i.e divisible by 400 year
#include<stdio.h>
int main()
{
int year;
printf("enter a year:");
scanf("%d",&year);

if(year % 4 == 0)
   {
	printf("%d is a leap year",year);
   }
else;
   {
	printf("%d is not a leap year",year);
   }
return 0;
}
 