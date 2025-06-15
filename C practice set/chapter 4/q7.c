/*7. Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10). */

#include <stdio.h>
int main()
{
    int n = 8 ;
    int sum = 0;
    int mul = 1 ;
    for (int i = 0 ; i <= 10; i++)
    {

    mul = n*i ;
    sum+= mul ;
    }
    printf("%d", sum);

    return 0;
}