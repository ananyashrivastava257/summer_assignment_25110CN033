#include <stdio.h>
int main()
{
    int n,i,t1=0,t2=1,nextterm=t1+t2;
    printf("enter number of terms:");
    scanf("%d", &n);
    printf("%d\t%d\t",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf("%d\t",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    return 0;
}