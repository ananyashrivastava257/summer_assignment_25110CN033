#include<stdio.h>
int main()
{
int i,rev=0,n;
printf("program to find whether number is a palindrome or not\n");
printf("enter a number:");
scanf("%d",&n);
int orig=n;

while(n>0)
{
i=n%10;
rev=(rev*10)+i;
n=n/10;
}
printf("reverse number is %d\n",rev);
if(orig==rev)
printf("given number is palindrome");
else
printf("given number is not a palindrome");
return 0;
}