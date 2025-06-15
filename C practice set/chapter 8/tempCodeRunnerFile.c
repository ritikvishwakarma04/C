#include<stdio.h>
int length(char st[]){
    int i=0 ;
    int count = 0;

    while (st[i]!= '\0')
    { i++;
        
        count++;
    }
return count;

}
int main(){
char st[]="ritik vishwakarma";
printf("the length of string is %d",length(st));

  
return 0;
}