/*
4. Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
 */

#include<stdio.h>
int main(){

  int year ;
  printf("Enter the year : ");
  scanf("%d",&year);
  if (year%4==0)
  {
    printf("Leap year \n");
  }
  else
  {
    printf("YEAR IS NOT LEAP \n");  }
  
  
return 0;
}