/*3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2.*/


#include<stdio.h>
double force(float m){
    float g = 9.8 ;
    float f = m*g ;
    return f;
}

int main(){
    float m ;
printf("Enter the mass of body in grams \n");
scanf("%f",&m);
 
  printf("The Force of attractin on this body is %fN",force(m));
return 0;
}