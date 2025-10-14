/*Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
char string[100];
void fun(char arr[]);
void main(){
    printf("enter the string:");
    fgets(string,100,stdin);
    fun(string);
}
void fun(char arr[]){
    int i=0;
    int j=0;
    for(i=0;string[i]!='\0';i++){
        if(string[i]>='a'&&string[i]<='z'){
            string[i]=string[i]-32;
        }
        else if(string[i]>='A'&&string[i]<='Z'){
            string[i]=string[i]+32;
        }
    }
    puts(string);
}
