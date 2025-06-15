/*
9. Repeat 8 using while loop.
*/

#include <stdio.h>
int main()
{
    int n;

    printf("Enter your num \n");
    scanf("%d\n", &n);
   
int i = n ;
 int fact = 1;
    while ( i>0 )
    {
        
        fact *= i;i-- ;
    }
    printf("%d", fact);

    return 0;
}