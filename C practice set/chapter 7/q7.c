/*7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively.*/

#include <stdio.h>
int main()
{
    int arr[3][10];
for (int i = 0; i < 3 ; i++)
{
    for (int j = 0; j < 10; j++)
    {if (i==0&&j<=9)
    {
         printf("%d",2*(j+1));
         printf("\n");
    }
    
    else if (i == 1 && j <= 9)
    {
        printf("%d",7 * (j + 1));
        printf("\n");
    }
   
    else if (i == 2 && j <= 9)
    {
        printf("%d", 9 * (j + 1));
        printf("\n");
    }
    }
    
}

    return 0;
}