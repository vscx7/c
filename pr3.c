#include <stdio.h>

unsigned long long int factorial(int n) {
  if (n == 0) {
    return 1; // factorial of 0 is 1
  } else if (n < 0) {
    printf("Factorial of negative numbers is undefined.\n");
    return -1; // error
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int input_number;

  // Get user input
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &input_number);

  // Calculate and display the factorial
  unsigned long long int result = factorial(input_number);
  if (result == -1) {
    // Error case
  } else if (result == 0) {
    printf("Overflow occurred! Please try a smaller number.\n");
  } else {
    printf("The factorial of %d is %llu.\n", input_number, result);
  }

  return 0;
}
