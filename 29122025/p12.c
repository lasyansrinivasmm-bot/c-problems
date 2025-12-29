#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;
    printf("enter your number");
    scanf ("%d",&number);
    if (number>=-9 && number<=9){
        printf("it is a single  digit ");
    }
    
    
    else{
        printf("its not not a  single digit");
    }
    return 0;
}