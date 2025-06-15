#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(NULL));  
int m = rand() % 100;
int n ;

    
while (1)
{printf("Guess a  number between 0 and 99 \n :");
scanf("%d",&n);


if (n==m)
{
     printf("Congratulations ! you guessed it right in %d steps  \n");
    break;
}
else if (n>m)
{
    printf("Lower number please\n ");
}
else if (n<m)
{
    printf("Higher number please\n ");
}



   
}



return 0;
}