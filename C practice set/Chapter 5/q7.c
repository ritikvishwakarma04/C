/*7. Write a program using function to print the following pattern (first n lines)
*
* * 
* * * 



1 - 1
2-  3
3-  5
*/
#include<stdio.h>
int star(int a );

int main(){
int a ;
printf("Enter the no of lines \n");
scanf("%d",&a);
  star(a);
return 0;
}

int star(int a)
{for (int i = 0 ; i < a ; i++)
{

  for (int  j = 1 ; j <= 2*i+1; j++)
  {
    printf("*");
  }
  printf("\n");
}
   
}