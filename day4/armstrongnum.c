#include <stdio.h>
int main()
{
    int num,ognum,digit,result=0;
    printf("enter value:");
    scanf("%d",&num);
    ognum=num;
    while(num!=0)
    {
        digit=num%10;
        result += digit*digit*digit;
        num=num/10;
    }
    if(result==ognum)
    {
        printf("entered number is armstrong number");
    }
    else
    {
        printf("entered number is not an armstrong number");
    }
    return 0;
}
