#include <stdio.h>
int main() {
    //Your Code goes here!
    int age;
    printf("enter your age ");
    scanf("%d",&age);
    if (age>=18){
        printf("eligible to vote");
    }
    else {
        printf("not a eligible to vote");
    }
    return 0;
}