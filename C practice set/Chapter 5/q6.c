
/*6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
#include<stdio.h>
int sum(int a);
int main(){
int n ;
printf("enter n :");
scanf("%d", &n);
printf("sum of %d natural numbers is %d ",n,sum(n));
return 0;
}
int sum(int a ){
if (a==0)
{
  return 0;
}
else if (a==1)
{
    return 1;

}

else
{ 
return a +sum(a-1);
   }
}