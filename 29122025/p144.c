#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;
    printf("enter your number ");
    scanf("%d",&number);
    if (number%2==0 && number%3==0){
        printf("divisible by 2 and 3");
    }
    else{
        printf("not a divisible by 2 and 3");
    }
    return 0;
}