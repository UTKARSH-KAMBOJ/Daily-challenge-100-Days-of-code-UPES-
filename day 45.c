/*Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
int i;
int j;
char a=0;
int count=0;
char string[100];
void fun(char arr[]);
void main(){
    printf("enter the string:");
    fgets(string,100,stdin);
    printf("enter the number for which you want to count the frequency:");
    scanf("%c",&a);
    fun(string);
}
void fun(char arr[]){
    for(i=0;string[i]!='\0';i++){
        if(string[i]==a){
        count++;
    }
}
printf("%d",count);
}
