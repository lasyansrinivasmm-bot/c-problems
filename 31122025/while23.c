#include <stdio.h>
int main() {
    //Your Code goes here!
    int n, r, t,rev=0;
    printf("enter your number");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    printf(" %d reveriseis %d",t,rev);

    
        
       
    return 0;
}