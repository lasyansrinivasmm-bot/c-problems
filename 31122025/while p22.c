#include <stdio.h>

int main() {
    
    int i,n,count=0;
    printf("enter a number:");
    scanf("%d",&n);
    
    while(n!=0){
        n=n/10;
        count=count+1;
        
    }
    printf("%d",count);
    return 0;
}