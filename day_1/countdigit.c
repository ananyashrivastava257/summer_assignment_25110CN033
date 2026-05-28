
#include <stdio.h>
int main() {
  long long n;
  int count = 0;
  printf("Enter an integer you want to count digits of: ");
  scanf("%lld", &n);
 
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}
