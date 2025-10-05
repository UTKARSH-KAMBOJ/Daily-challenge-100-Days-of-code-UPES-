/*Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<string.h>
char arr[100];
char a,e,i,o,u;
int  fun(char arr[]);
int main(){
    printf("enter the string:");
    fgets(arr,100,stdin);
    fun(arr);
}
int  fun(char arr[]){
    int count=0;
    int count1=0;
    int i;
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            count++;
            
        }
        else{
            count1++;
        }
    
    }
    printf("vowels:%d",count);
    printf("consonants:%d",count1-1);

}
