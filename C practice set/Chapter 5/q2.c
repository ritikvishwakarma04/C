/*2. Write a function to convert Celsius temperature into Fahrenheit.
*/
#include<stdio.h>
float convert(float a){
    printf("The temperature in degree farenheit is %f\n",(a*9/5)+32);
}

int main(){
    float a ;
printf(
"Enter temperature in degree celcius \n "
);
  scanf("%f",&a);
  convert(a);
return 0;
}
