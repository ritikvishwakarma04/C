/*1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.
*/

#include<stdio.h>
int main(){
int arr[]={0,1,2,3,4,5,6,7,8,9};
int*i = arr ;
printf("%u\n",i);
i+=2;
printf("%u\n", i );

return 0;
}