/*
Try problem 3 using call by value and verify that it does not change the value of
the said variable.
*/
#include <stdio.h>
int increment(int a);
int main()
{
    int i = 5;
    int *j = &i;
    printf("Ten times %d is %d \n ", i, increment(*j));

    return 0;
}
int increment(int *a)
{
    int p = (*a) * 10;
    return p;
}