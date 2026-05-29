#include<stdio.h>
int main()
{
int i,rev=0,n;
printf("program to reverse the digits of a number\n");
printf("enter a number:");
scanf("%d",&n);

while(n>0)
{
i=n%10;
rev=(rev*10)+i;
n=n/10;
}
printf("reverse number is %d",rev);

}