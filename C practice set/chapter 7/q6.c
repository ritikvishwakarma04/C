/*6. Write a program containing functions which counts the number of positive
integers in an array.*/
#include<stdio.h>
int main(){
int arr[]={1,2,3,4,-5,-6,-7,-8};

int count = 0 ;
for (int i = 0; i < 7 ; i++)
{if(arr[i]>0)
{
    count++;
}
}

printf("%d",count);


  
return 0;
}