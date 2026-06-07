#include<stdio.h>

int sum( int a)
{
  int s;
  if (a==0)
  return 0;
  else
  {
  s=a%10 + sum(a/10);
  return s;}
}
int main()
{
   int n,ans;
   printf("enter a number:");
   scanf("%d",&n);
   
   ans=sum(n);
   printf("sum of digits= %d",ans);
   return 0;

}