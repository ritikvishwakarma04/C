/*6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. */
#include <stdio.h>
int main()
{
    int n = 10;
    int sum = 0;int i = 0;
    while (i < 10 )
    {
i++;
        sum += i;
    }
    printf("%d", sum);

    return 0;
}