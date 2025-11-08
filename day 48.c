/*Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],temp[200];
    printf("enter string1:");
    scanf("%s",str1);
    printf("enter string2:");
    scanf("%s",str2);
    strcpy(temp,str1);
    strcat(temp,str1);
    if(strstr(temp,str2)!=NULL){
        printf("rotation");
    }
    else{
        printf("no rotation");
    }
    return 0;
}
