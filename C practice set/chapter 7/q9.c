/*9. Create a three–dimensional array and print the address of its elements in
increasing order.
*/

#include <stdio.h>
int main()
{
    int arr[3][3][3];
    int* x=arr; 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u\t", x++);
            }
            
        }
    }

    return 0;
}