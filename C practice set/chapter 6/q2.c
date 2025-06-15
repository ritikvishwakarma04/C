/*2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why? */

#include<stdio.h>
void pass(int* a)
{
 return  printf("Passed address is %u \n ",a);
}
int main(){
int i = 5 ;
printf("%u\n", &i);
pass(&i);
return 0;
}
