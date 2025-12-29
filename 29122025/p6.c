#include <stdio.h>
int main() {
    //Your Code goes here!
char ch;
printf("enter you charcter");
scanf ("%c",&ch);
if(ch=='a'||ch=='e' ||ch=='i'||ch=='o'||ch=='u' 
||ch=='A' ||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    printf("      it is a vowel" ,ch);
}
else {
    printf("   not a vowel",ch);
}
    return 0;
}