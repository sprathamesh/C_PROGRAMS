#include<stdio.h>
int main()
{
int num1,num2,num3,num4;
printf("Enter Four Numbers\n");
scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
if (num1>num2)
{
	if(num1>num3)
	{
		if(num1>num4)
		{
		    printf("%d is big", num1);
		}
		else
		{
			printf("%d is big",num4);
		}
	}
}
else if(num2>num3)
{
    if(num2>num4)
    {
        printf("%d is big",num2);
    }
    else
    {
        printf("%d is big",num4);
    }
}
else if(num3>num4)
{
    printf("%d num3 is big",num3);
}
else
{
    printf("%d num 4 is big",num4);
}
return 0;
}