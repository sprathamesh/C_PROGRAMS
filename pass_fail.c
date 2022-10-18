//pass or fail if it requires total 40% and at least 33% in
//each subject to pass assume 3 subjects and take input of marks.

#include<stdio.h>
int main()
{
int physics,chemistry,maths;
float total;
printf("enter physics makrs\n");
scanf("%d", &physics);

printf("enter chemistry makrs\n");
scanf("%d", &chemistry);

printf("enter maths makrs\n");
scanf("%d", &maths);

total=(physics + maths + chemistry)/3;
if((total<40) || physics<33 || maths<33 || chemistry<33)
{
printf("your percentage is %f and you are failed\n",total);
}
else
{
printf("your percentage is %f and you are pass\n",total);
}
return 0;
}