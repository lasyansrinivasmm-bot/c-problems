#include <stdio.h>
int main() {
    //Your Code goes here!
    int i,n,sum;
    printf("enter you number");
    scanf("%d",&n);
   sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    
      printf("%d ",sum);
    }
    return 0;
}