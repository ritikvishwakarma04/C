/* 
1. Which of the following is used to appropriately read a multi-word string.
1. gets() y
2. puts()
3. printf()
4. scanf()
2. Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.
*/

#include<stdio.h>
#include<string.h>
int main(){
char st[6];
char at[6];

scanf("%5s",st);
int i=0;
while (i<6)
{
   
  scanf(" %c",&at[i]) ; //here a space is added for countering a scanf's newline because scanf contains a default newline character \n 
  i++;
}

 at[5]='\0'; 



if (strcmp(st,at)==0)
{
    printf("strings are equal\n");

}
else
{
    printf("strings are not equal\n");
}

return 0;
}

    