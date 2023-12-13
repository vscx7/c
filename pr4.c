#include <stdio.h>

// Function to calculate Q(j, k)
int Q(int j, int k) {
  if (j < k) {
    return 5;
  } else {
    return Q(j + k, k - 2) + 10;
  }
}

int main()
 {
  // Get input values for j and k
  int j, k;
  printf("Enter value for j: ");
  scanf("%d", &j);
  printf("Enter value for k: ");
  scanf("%d", &k);

  // Calculate and display the result
  int result = Q(j, k);
  printf("Q(%d, %d) = %d\n", j, k, result);

  return 0;
}
