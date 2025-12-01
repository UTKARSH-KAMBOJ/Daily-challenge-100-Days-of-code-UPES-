Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>
enum message {SUCCESS, FAILURE, TIMEOUT};
int main(){
char input[30];
printf("Enter your report:");
scanf("%s", input);
enum message msg;
if(strcmp(input, "SUCCESS")==0)
msg=SUCCESS;
else if(strcmp(input, "FAILURE")==0)
msg=FAILURE;
else if(strcmp(input, "TIMEOUT")==0)
msg=TIMEOUT;
else{
    printf("Invalid operation");
    return 1;
}


switch(msg){
    case SUCCESS: printf("Operation successful"); break;
    case FAILURE: printf("Operation failure"); break;
    case TIMEOUT: printf("Operation timeout"); break;
    default: printf("Invalid operation"); break;
}
return 0;
}
