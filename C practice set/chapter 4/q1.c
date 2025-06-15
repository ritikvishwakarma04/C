/*1. Write a program to print multiplication table of a given number n. */


#include<stdio.h>
int main(){
int n = 5 ;

for (int  i = 0; i <=10 ; i++)
{
    printf("%d x %d = %d \n", n , i , n*i );
}

  
return 0;
}