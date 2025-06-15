/*3. A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.
4. What can be done using one type of loop can also be done using the other two
types of loops – true or false?
5. Write a program to sum first ten natural numbers using while loop
*/

#include<stdio.h>
int main(){
int n = 10 ;
int sum = 0 ;
for (int  i = 0 ; i <=10 ; i++)
{
    
    sum+=i ;
}
printf("%d",sum);
  
return 0;
}