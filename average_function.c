//avarage of 3 numbers using functions

#include<stdio.h>
float average(int a,int b,int c);

int main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("average of given values is %f",average(a,b,c));
	return 0;
}

float average(int a,int b,int c)
{
	float result;
	result=(float)(a+b+c)/3;
	return result;
}
	










