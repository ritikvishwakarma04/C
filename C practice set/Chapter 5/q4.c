/*
4. Write a program using recursion to calculate nth element of Fibonacci series.
5. What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);

*/

#include<stdio.h>

int fib(int a);
int main(){
int a ;
printf("Enter a number: ");
scanf("%d", &a);
printf(" %d\n", fib(a));
return 0;
}
int fib(int a){
    if (a==0)
    {
       return 0 ;
    }
    else if (a==1)
    {
        return 1 ;
    }
    else
    {
       return  fib(a-1) + fib(a-2) ;
    }
    
}