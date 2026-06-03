#include<stdio.h>
int main()
{
    int i,n1,n2,gcd;
    printf("n1=");
    scanf("%d",&n1);
    printf("n2=");
    scanf("%d",&n2);
    
for(i=1;i<=n1 && i<=n2;i++)
{
 if(n1%i==0 && n2%i==0)
 gcd=i;

}
printf("gcd=%d",gcd);

}
