/*

5. Write a program to determine whether a character entered by the user is
lowercase or not. */
// In ASCII table
// 65-90 = uppercase 
// 97-122 = lowercase 


#include<stdio.h>
int main(){
char a ;
printf("Enter your character \n :");
scanf("%c\n",&a);
if (a>=97|| a<= 122)
{
    printf("The character is lowercase \n ");
}
else 
{
    printf("The character is uppercase \n ");
}

    return 0;
}