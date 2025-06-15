

/* a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().

pass the value by reference
*/

#include<stdio.h>
int* opt(int*a , int*b);
int main(){
int a=9 ;
int b=9 ;
  opt(&a , &b);
return 0;
}
int* opt(int*a , int* b){
return printf("Sum of %d and %d is %d and average is %d \n",*a ,*b ,*a+*b ,(*a+*b)/2);
    
}