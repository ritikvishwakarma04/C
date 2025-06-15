/*1. Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/

#include<stdio.h>
int main(){
int i =3 ;
printf("%p\n",&i );

int *j = &i ;

printf("The value at address %p is %d ", &i ,*j );
return 0;
}