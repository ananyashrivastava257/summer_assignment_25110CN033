#include<stdio.h>

int main()

{
int num, i, sum=0;
printf("enter number:");
scanf("%d", &num);
if(num<=0)
{
printf("not a perfect number");
}

for(i=1;i<=num/2;i++)
{
if(num%i==0)
{
sum-sum+i;
}
}
if(sum==num)
{
printf("entered number is a perfect number");
}
else
{
printf("entered number is not a perfect number");
}
return 0;

}
