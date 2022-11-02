// generate random number using rand() function
//number = ran()%100 + 1;
//this work as any random number will divide by 100 the answer will be in 0 to 100 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number;
	srand(time(0));  //random numbers for every output
	number = rand()%100 + 1; //generate random number between 1 to 100
    printf("the number is %d",number);
		
    return 0;
}
	