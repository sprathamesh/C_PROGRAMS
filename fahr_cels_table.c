
//print  fahrenheit-celcius table

#include <stdio.h>
int main() 
{
    int  fahrenheit,celcius;
    int upper,lower,step;
    
    lower=0;
    upper=300;
    step=20;
    
     fahrenheit=lower;
     while( fahrenheit<=upper)
{
    celcius=5*(fahrenheit-32)/9;
    printf("%d \t %d \n", fahrenheit,celcius);
     fahrenheit= fahrenheit + step;
}
    return 0;
}