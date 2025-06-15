/*8. Write a program to calculate the factorial of a given number using a for loop.
9. Repeat 8 using while loop.
10. Write a program to check whether a given number is prime or not using loops.
11. Implement 10 using other types of loops.
*/


#include<stdio.h>
int main(){
int n ;

printf("Enter your num \n");
scanf("%d\n",&n);
int fact = 1;

for (int i = n ; i ; i--)
{
   fact *= i ;
}
printf("%d",fact );
  
return 0;
}
