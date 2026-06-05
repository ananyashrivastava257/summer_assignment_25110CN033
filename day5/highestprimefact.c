#include <stdio.h>
int main()
{
    int num,i,j,greatest;
    printf("enter number to be checked:");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        int isprime=1;
        if(i<=1)
        {
            isprime=0;
        }
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)

            { 
                isprime=0;
                break;
            }
           
        }
         if(isprime==1)
            {
                greatest=i;
            }
    }
    }
    printf("highest prime factor is %d\n", greatest);
    return 0;

}