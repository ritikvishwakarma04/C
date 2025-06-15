/*
10. Write a program to check whether a given number is prime or not using loops. 

*/

#include<stdio.h>
int main(){
int n ;
printf("Enter the number :\n");
scanf("%d",&n);

if (n==0 || n==1)
{
    printf("%d is prime \n",n);

}
else 
{
    for (int i = 2; i*i<=n ; i++)
    {
       if (n%i==0)
       {
           printf("%d is not prime \n", n);
       }
       
        
        else
    {
        printf("%d is  prime \n", n);
    }
    }
    
}

    
  
return 0;
}