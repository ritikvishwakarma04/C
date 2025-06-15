 // 1. Write a C program to calculate area of a rectangle: 
//a. Using hard coded inputs. 
//b. Using inputs supplied by the user. 

#include<stdio.h>

int main(){
    
    float l   ; float b ;

printf("Enter the length of rectangle \n ");
scanf("%f",&l);
printf("Enter the breadth of rectangle \n ");
scanf("%f",&b);

    printf("Area of rectangle is %f square units",l*b);
    return 0;
}
      /*  #include <stdio.h>

int main()
{
    int l = 3;
    int b = 4;
    int area = l * b;
    printf("Area of rectangle is %d square units", area);
    return 0;
} */