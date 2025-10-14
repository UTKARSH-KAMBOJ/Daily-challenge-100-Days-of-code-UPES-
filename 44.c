/*Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
char string[100];
int i=0;
void fun(char arr[]);
void main(){
printf("enter the string:");        
fgets(string,100,stdin);
fun(string);
}
void fun(char arr[]){
for(i=0;string[i]!='\0';i++){
if(string[i]==' '){
    string[i]='-';
}
}
puts(string);
}
