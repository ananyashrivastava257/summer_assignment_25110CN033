#include<stdio.h>
int main()
{ long long int n,sum=0,i;
    printf("program to find sum of digits of a number:\n");
    printf("enter a number:");
    scanf("%lld",&n);

    while(n>0)
    {i=n%10;
    sum=sum+i;
    n=n/10;}
printf("sum=%lld",sum);

}