#include<stdio.h>
int main()
{
    int length=3,breath=4;
    int area=length*breath;
    printf("area of rectangle is %d \n",area);
    
    printf("length \n");
    scanf("%d",&length);
    printf("breath \n");
    scanf("%d",&breath);
    printf("area of rectangle is %d",length*breath);
return 0;
}