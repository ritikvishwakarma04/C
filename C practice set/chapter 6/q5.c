#include<stdio.h>
int main(){
int a =556 ;
int*j=&a;
int**x=&j;
printf("%d\n", *j);
printf("%d",**x);
  
return 0;
}