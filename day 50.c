#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", str);  // simple input

    // Copy day part
    while(str[i] != '/') {
        result[j++] = str[i++];
    }
    i++;  // skip '/'

    // Check month and copy abbreviation
    if(str[i] == '0' && str[i+1] == '1') { result[j++]='J'; result[j++]='a'; result[j++]='n'; }
    else if(str[i] == '0' && str[i+1] == '2') { result[j++]='F'; result[j++]='e'; result[j++]='b'; }
    else if(str[i] == '0' && str[i+1] == '3') { result[j++]='M'; result[j++]='a'; result[j++]='r'; }
    else if(str[i] == '0' && str[i+1] == '4') { result[j++]='A'; result[j++]='p'; result[j++]='r'; }
    else if(str[i] == '0' && str[i+1] == '5') { result[j++]='M'; result[j++]='a'; result[j++]='y'; }
    else if(str[i] == '0' && str[i+1] == '6') { result[j++]='J'; result[j++]='u'; result[j++]='n'; }
    else if(str[i] == '0' && str[i+1] == '7') { result[j++]='J'; result[j++]='u'; result[j++]='l'; }
    else if(str[i] == '0' && str[i+1] == '8') { result[j++]='A'; result[j++]='u'; result[j++]='g'; }
    else if(str[i] == '0' && str[i+1] == '9') { result[j++]='S'; result[j++]='e'; result[j++]='p'; }
    else if(str[i] == '1' && str[i+1] == '0') { result[j++]='O'; result[j++]='c'; result[j++]='t'; }
    else if(str[i] == '1' && str[i+1] == '1') { result[j++]='N'; result[j++]='o'; result[j++]='v'; }
    else if(str[i] == '1' && str[i+1] == '2') { result[j++]='D'; result[j++]='e'; result[j++]='c'; }

    i += 2; // skip month digits
    result[j++] = '-';

    // Copy year
    while(str[i] != '\0') {
        result[j++] = str[i++];
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
