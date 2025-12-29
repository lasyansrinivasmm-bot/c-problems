#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;
    printf("enter your number");
    scanf("%d",&number);
    if(number%3==0 && number%5==0){
        printf("divisible by 3 and 5");
    }
    else {
        printf("not divisible");
    }
    
    return 0;
}