/* 1. Write a program using function to find average of three numbers. 
2. Write a function to convert Celsius temperature into Fahrenheit. 
3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2. 
4. Write a program using recursion to calculate nth element of Fibonacci series. 
5. What will the following line produce in a C program: 
int a = 4; 
printf("%d %d %d \n", a, ++a, a++); 
6. Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
7. Write a program using function to print the following pattern (first n lines) 
* 
* * * 
* * * * * 
 */
 
 int avg(int a, int b ,int c){
int x = (a+b+c)/3 ;
return printf("Average of %d , %d, %d is %d",a,b,c,x);

 }
 
 #include<stdio.h>
 int main(){
 int a =2 , b=3 ,c=4 ;
 avg(a,b,c);
   
 return 0;
 }
 
 
 
 
 
 
 
 
 
 
