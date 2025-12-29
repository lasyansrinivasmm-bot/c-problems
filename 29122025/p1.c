#include <stdio.h>
int main() {
int num;
  printf("enter your number");
    scanf("%d",&num);
    if (num %2 == 0){
        printf("even number%d\n",num);
    }
        else{
            printf("odd number",num);
        }
    
    
    return 0;
}