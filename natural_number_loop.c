//sum of first ten natural numbers using loops

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		sum +=i;
	}
	
	printf("sum=%d",sum);
	
	return 0;
}
	