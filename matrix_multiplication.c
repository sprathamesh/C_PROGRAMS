//MATRIX MULTIPLICATION 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10][10],b[10][10],mul[10][10],row,coloumn,i,j,k;
	system("cls");
	printf("enter the number of row=");
	scanf("%d",&row);
	printf("enter the number of coloumn=");
	scanf("%d",&coloumn);
	
	printf("enter first matrix element=\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter second matrix element=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("multiply of matrix=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			mul[i][j]=0;
			for(k=0;k<coloumn;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	//for printing result
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloumn;j++)
		{
			printf("%d \t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	