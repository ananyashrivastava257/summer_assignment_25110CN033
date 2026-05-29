
#include<stdio.h>
int main()
{ long long int n,prod=1,i;
    printf("program to find product of digits of a number:\n");
    printf("enter a number:");
    scanf("%lld",&n);

    while(n>0)
    {i=n%10;
    prod=prod+i;
    n=n/10;}
printf("product=%lld",prod);

}