// prime number or not
// divisible by one or by itself is prime number
#include<stdio.h>
int main()
{
    int i,number=45,prime=0;
	
	for(i=2;i<45;i++)
	{
		if(number%i==0)
		{
			prime=1;
	        break;
		}
	}
	if(prime==1)
	{
        printf("this is not prime number");
	}
    else
    {
        printf("this is prime number");
    }
return 0;
}
	
		