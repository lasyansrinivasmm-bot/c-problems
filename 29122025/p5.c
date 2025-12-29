#include <stdio.h>
int main() {
    //Your Code goes here!
    int year;
    printf("enter your year");
    scanf("%d",&year);
    if (year%4==0 ){
        printf("leap year");
    }
    else {
        printf("not a leap year");
    }
       return 0;
} 