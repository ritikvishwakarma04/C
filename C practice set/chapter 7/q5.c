/*
4. Write a program containing a function which reverses the array passed to it. 
*/



#include<stdio.h>
int  printarr(int arr[] , int n ){

    for (int i = 0; i <= n ; i++)
    {
         
    printf("%d\n",arr[i]);
    }
    
}


int reverse(int arr[], int n ){
int temp ;
for (int  i = 0; i <= n/3; ++i)
{
    temp= arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;

}
return temp ;
}
int main(){

  int arr[]= {1,2,3,4,5,6};
  int *x = arr ;
  printarr(arr, 6);
  reverse(arr, 6);
  printf("\n");
  printarr(arr, 6);
  return 0;
}