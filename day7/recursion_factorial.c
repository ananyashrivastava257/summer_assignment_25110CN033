#include<stdio.h>
int factorial(int n)
{
    int f;
    if(n==0)
     {return 1;}
    else
     {f=n*factorial(n-1);}
     
    return f;
}
int main()
{
    int n;
    long long int answer;
    printf("enter positive integer:");
    scanf("%d",&n);
    answer=factorial(n);

    printf("factorial= %d",answer);

    return 0;
}