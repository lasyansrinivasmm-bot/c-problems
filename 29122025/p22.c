#include <stdio.h>
int main() {
    //Your Code goes here!
    int  n;
    printf("enter your number");
    scanf ("%d",&n);
    if (n>0){
        printf ("positive number");
    }
    else if(n<0){
    printf("negative number");
    }
    else  if (n==0){
        printf("zero");
    }
    else{
        printf("naot a number ");
    }
    return 0;
}