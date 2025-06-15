/*6. Write a program to find greatest of four numbers entered by the user.*/

#include<stdio.h>
int main(){
int a = 1 , b = 3 , c =4 ,d=6 ;
  if (a>b && a>c && a>d)
  {
  printf("%d is greatest in %d %d %d \n",a,b,c,d );
  }
  if (b > a && b > c && b> d)
  {
      printf("%d is greatest in %d %d %d \n", b, a, c, d);
  }
  if (c> b && c > a && c > d)
  {
      printf("%d is greatest in %d %d %d \n", c, b, a, d);
  }
  if (d > b && d > c && d > a)
  {
      printf("%d is greatest in %d %d %d \n", d, b, c, a);
  }
return 0;
}