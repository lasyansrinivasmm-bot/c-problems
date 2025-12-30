#include <stdio.h>

int main() {
  int num, i;

  // Prompt the user for input
  printf("Enter an integer to see its multiplication table: ");
  // Read the number from the keyboard and store it in 'num'
  scanf("%d", &num);

  printf("Multiplication Table of %d:\n", num);
  
  // Use a for loop to iterate from 1 to 10
  for (i = 1; i <= 10; ++i) {
    // Print each line of the table in a formatted way
    printf("%d x %d = %d\n", num, i, num * i);
  }

  return 0;
}