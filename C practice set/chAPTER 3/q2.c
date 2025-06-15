/*1. What will be the output of this program
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");
2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
 */

#include<stdio.h>
int main(){
  int math, physics, english, hindi, chemistry;
  printf("enter your marks in Mathematics :");
  scanf("%d", &math);
  printf("\n");
  printf("enter your marks in Physics:");
  scanf("%d", &physics);
  printf("\n");
  printf("enter your marks in Chemistry :");
  scanf("%d", &chemistry);
  printf("\n");
  printf("enter your marks in Hindi :");
  scanf("%d", &hindi);
  printf("\n");
  printf("enter your marks in English :");
  scanf("%d", &english);
  printf("\n");


  if ( math >= 33 )
  {
    printf(" Passed in Mathematics \n ");
  }
  else
  {
    printf(" Failed in Mathematics \n ");
  }
  if ( physics >= 33)
  {
    printf(" Passed in Physics \n ");
  }
  else
  {
    printf(" Failed in Physics  \n ");
  }
  if ( chemistry>= 33)
  {
    printf(" Passed in  Chemistry\n ");
  }
  else
  {
    printf(" Failed in Chemistry\n ");
  }
  if (hindi >= 33)
  {
    printf(" Passed in Hindi\n ");
  }
  else
  {
    printf(" Failed in Hindi \n ");
  }
  if (english >= 33)
  {
    printf(" Passed in English\n ");
  }
  else
  {
    printf(" Failed in English \n ");
  }

  float x = (math+physics+ english + hindi+chemistry)/5;

  if (x >= 40)
  {
    printf("Passed with%f  percentage \n",x);
  }
  else
  {
    printf("Failed \n");
  }
  
  
  return 0;
}