#include <stdio.h>
int main()
{
    int n,i,t1=0,t2=1,nextterm=t1+t2;
    printf("enter position of term:");
    scanf("%d", &n);

    for(i=3;i<=(n-1);i++)
    {
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;
    }
    printf("%d\t",nextterm);
    return 0;
}