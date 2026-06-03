#include <stdio.h>
int main()
{int start,end;
    int n;
    int i,j;
    
    printf("enter start number :\n");
    scanf("%d",&start);
    printf("enter end number :\n");
    scanf("%d",&end);
    
    for (j=start;j<=end;j++)
    {
    n=j;
    int isprime=0;// isprime=0 means number is a prime number
    if(n==0 || n==1)
    {
        isprime=1;// isprime=1 means number is not a prime number
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
             isprime=1;
             break;
        }
    }
    if(isprime==0)
    {
        printf("%d\t",n);
    }
}
    return 0;
}