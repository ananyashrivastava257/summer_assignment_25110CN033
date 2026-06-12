#include <stdio.h>
int findSum(int a, int b);

int main()
 {
    int n1,n2,sum;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    sum = findSum(n1, n2);
    printf("The sum of %d and %d is: %d\n", n1, n2, sum);
    return 0;
}

int findSum(int a, int b) 
{
    return a + b;
}
