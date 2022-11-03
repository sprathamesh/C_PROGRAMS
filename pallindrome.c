// GIVEN NUMBER IS PALINDROME OR NOT  
//get number-hold in temporary variable-reverse the number
//compare both numbers-if same its palindrome-else not
//  eg:323 it is palindrome (reverse it it will be same)

#include<stdio.h>
int main()
{
	int temp,sum=0,number,reverse;
	printf("Enter th number=");
	scanf("%d",&number);
	temp=number;   //input number get stored in temp 
	while(number>0)
	{
		reverse=number%10;   
		sum=(sum*10)+reverse;
		number=number/10;
	}
	if(temp==sum)
		printf("Its A Palindrome Number");
	else
		printf("Its Not A Palindrome Number");
	return 0;
}