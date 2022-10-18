#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("before swap a=%d and b=%d \n\n\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap a=%d and b=%d ",a,b);
    return 0;
}