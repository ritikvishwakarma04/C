// 8. Repeat problem 7 for a custom input given by the user.

#include <stdio.h>
int main()
{
    int arr[3][10];
    int a,b,c ;
printf("Enter the three numbers to print a table :\n");
scanf("%d",&a);
scanf("%d", &b);
scanf("%d", &c);

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 10; j++)
    {
        if (i == 0 && j <= 9)
        {
            printf("%d", a * (j + 1));
            printf("\n");
        }

        else if (i == 1 && j <= 9)
        {
            printf("%d", b * (j + 1));
            printf("\n");
        }

        else if (i == 2 && j <= 9)
        {
            printf("%d", c * (j + 1));
            printf("\n");
        }
    }
    }

    return 0;
}