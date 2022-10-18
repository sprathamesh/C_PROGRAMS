#include <stdio.h>

int main() 
{
    int i,n;
    printf("Enter The Values Of n\t");
    scanf("%d",&n);
    printf("printing natural numbers from 1 to %d\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    
    return 0;
}