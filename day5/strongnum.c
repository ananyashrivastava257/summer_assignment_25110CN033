#include <stdio.h>
int getfactorial(int digit)
{
    int i,result=1;
    for(i=1;i<=digit;i++)
    {
        result=result*i;
    }
    return result;
}
int main()
{
    int num,ognum,lastdigit,sum=0;
    printf("enter number");
    scanf("%d", &num);
    ognum=num;
    while(num>0)
    {
        lastdigit=num%10;
        sum=sum+ getfactorial(lastdigit);
        num=num/10;
    }
    if(sum==ognum)
    {
        printf("entered number is a strong number");
    }
    else 
    {
        printf("entered number is not a strong number");
    }
    return 0;
}