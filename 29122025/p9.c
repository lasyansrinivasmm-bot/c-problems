#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    printf("enter your alphabet");
    scanf("%c",&ch);
    if (ch>='A'&& ch<='Z'){
        printf("it is upper case ",ch);

    }
    else if(ch>='a'&& ch<='z') {
        printf("it is lower case",ch);
    }
    else {
        printf ("its not ALPHABET",ch);

    }
    return 0;
}