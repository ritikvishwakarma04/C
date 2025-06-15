/*
4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest.*/


#include<stdio.h>

int main()
{ float p, r ,t ;



printf("Enter the principal amount in rupees  \n ");
scanf("%f",&p);


    printf("enter the rate of interest per year\n");
  scanf("%f",&r);
      printf("enter the time Period in years\n");
  scanf("%f",&t);
  
  printf("The simple interest  will be %f rupees",p*r*t/100);
    return 0;
}