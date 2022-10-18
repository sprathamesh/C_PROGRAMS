//odd and even numbers
#include<stdio.h>
 int main()
 {
 int number;
 printf("Enter A Number\n");
 scanf("%d",&number);
 if(number%2==0)
 { 
 printf("%dIs Even\n",number);
 }
 else
 {
 printf("%d Is Odd\n",number);
 }
 return 0;
 }
