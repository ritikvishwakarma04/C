
/*
2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element: 
(i) True.  
(ii) False.  
(iii) Depends. 
3. Write a program to create an array of 10 integers and store multiplication table of 
5 in it. 
*/
#include<stdio.h>
int main(){
int arr[10];
  for (int i = 0; i <10 ; i++)
  {
    arr[i]=5*(i+1) ;
    printf("5 x %d = %d \n", i+1,arr[i]);
  }
  
return 0;
}