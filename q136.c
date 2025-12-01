Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
#include<string.h>
enum operation {ADD, SUBTRACT, MULTIPLY};
int main(){
char input[20];
printf("Enter your arithmetic input(ADD,SUBTRACT,MULTIPY):");
scanf("%s", input);
enum  operation msg;
if(strcmp(input, "ADD")==0)
msg=ADD;
else if(strcmp(input, "SUBTRACT")==0)
msg=SUBTRACT;
else if(strcmp(input, "MULTIPLY")==0)
msg=MULTIPLY;
else{
    printf("Invalid operation");
    return 1;
}
int a,b;
printf("Enter first integer:");
scanf("%d",&a);
printf("Enter second integer:");
scanf("%d",&b);

switch(msg){
    case ADD: printf("ADDITION:%d",a+b); break;
    case SUBTRACT: printf("SUBTRACT:%d",a-b); break;
    case MULTIPLY: printf("MULTIPLICATION:%d",a*b); break;
    default: printf("Invalid operation"); break;
}
return 0;
}
