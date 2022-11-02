//factorial of a number
#include<stdio.h>

int main()
{
	int i,n,factorial=1;
	printf("enter a number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("the value of factorial %d is %d",n,factorial);
	return 0;
}
	
	