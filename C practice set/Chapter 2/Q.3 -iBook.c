/*1. Which of the following is invalid in C?
a. int a=1; int b = a;
b. int v = 3*3;
c. char dt = ‘21 dec 2020’;
2. What data type will 3.0/8 – 2 return?
3. Write a program to check whether a number is divisible by 97 or not.
4. Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
5. 3.0 + 1 will be:
a. Integer.
b. Floating point number.
c. Character. */

#include<stdio.h>

int main()
{ int a  ;



printf("Enter a \n " );
  scanf("%d",&a);
  if(a%9==0){
  printf("a is divisible by 9 \n");
  }
  else{
  printf("a isn't divisible by 9 \n");
  }
    return 0;
}