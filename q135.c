Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include<stdio.h>
#include<string.h>
enum digit {A=10, B, C}; 
int main(){
char input[3];
printf("Enter from first three alphabet:");
scanf("%s", input);
enum digit num;
if(strcmp(input, "A")==0)
num=A;
else if(strcmp(input, "B")==0)
num=B;
else if(strcmp(input, "C")==0)
num=C;
else{
    printf("INvalid option");
    return 1;
}
switch(num){
    case A: printf("%d", A); break;
    case B: printf("%d", B); break;
    case C: printf("%d", C); break;
    default: printf("INvalid");
}

return 0;
}
