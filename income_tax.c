
//accept salary and print percentage of tax on there salary

#include<stdio.h>
int main()
{
float income;
printf("enter your income amount");
scanf("%f", &income);
 
 if(income<250000)
 {
	 printf("no tax");
 }
 else if(income>=250000 && income<=500000)
 {
	 printf(" tax is 5 percentage on your income",income);	 
 }
 else if(income>=500000 && income<=1000000)
 {
	 printf(" tax is 20 percentage on your income",income);	 
 }
 else
 {
	 printf("tax is 30 percentage on your income ",income);
 }
return 0;
}

