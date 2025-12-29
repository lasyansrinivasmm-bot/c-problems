#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;
    printf("enter your number ");
    scanf("%d",&number);
    if (number%11==0){
        printf("divisible by 11");
    }
    else{
        printf("not a divisible by 11");
    }
    return 0;
}