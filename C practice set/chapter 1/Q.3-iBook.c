
/*
3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
 */

#include <stdio.h>

int main()
{ float c  ; float f ;

printf("Enter the temperature in degree celcius  \n ");
scanf("%f",&c);


    printf("Temperature in °F is %f ",((c*9)/5)+32);
    return 0;
}