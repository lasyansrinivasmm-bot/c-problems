#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    printf("enter your charcter");
    scanf("%C",&ch);
    if(ch >='a'&& ch<='z'){
    printf("it is alphabet");
    }
    else if (ch>='A' && ch<='Z')
    printf("it is alphabet");
    else {
        printf ("not a alphabet");
    }

    
    return 0;
}