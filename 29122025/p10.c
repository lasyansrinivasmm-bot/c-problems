#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    printf("enter your marks ");
    scanf("%d",&marks);
    if(marks<=100 && marks>=85){
        printf("grade A");
    }
    else if(marks<=84 && marks>=65){
        printf("grade b");
    }
     else if (marks<=64 && marks>=45){
        printf("grade c");
     }
     else {
        printf("fail");
     }
    
    return 0;
}