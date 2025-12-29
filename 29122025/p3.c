#include <stdio.h>
int main() {
    //Your Code goes here!
    int n1,n2;
printf("enter your number");
    scanf("%d",&n1);
    printf("enter your number ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("%d is larger ",n1);
    }
        else if(n2>n1){
    printf ("smallest number is %d",n2);
        }
        else  
        printf("both numbers are equal");
    return 0;
}