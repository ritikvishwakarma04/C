/*4. Repeat problem 3 for a general input provided by the user using scanf. */

#include <stdio.h>
int main()
{   int n ;
    printf("Enter the number : \n");
    scanf("%d",&n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
        printf("%d x %d = %d \n",n, i + 1, arr[i]);
    }

    return 0;
}