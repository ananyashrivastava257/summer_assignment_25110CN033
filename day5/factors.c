#include<stdio.h>
int main()
{
    int num,i;
    printf("enter number to find factors of:");
    scanf("%d",&num);
    
    printf("factors are:\t");
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {printf(" %d\t",i);}
    }
    return 0;
}