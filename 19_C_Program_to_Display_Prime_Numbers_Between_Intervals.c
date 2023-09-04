#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter serial of prime or not prime number: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  for(int j=0;j<n;j++){
    if (j == 0 || j == 1)
    flag = 1;

  for (i = 2; i < j ; i++) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);
  }

  return 0;
}
