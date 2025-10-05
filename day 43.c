/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
int i=0;
int l=0;
char str[100];
void fun(char arr[]);
void main(){
    printf("enter the string:");
    fgets(str,100,stdin);
    fun(str);
}
void fun(char arr[]){
    
    while(str[l]!='\0'){
        l++;
    }
    i=l-1;
    while(i>=0){
        printf("%c",str[i]);
        i--;
    }
}
