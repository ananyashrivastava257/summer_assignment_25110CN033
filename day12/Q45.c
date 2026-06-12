#include<stdio.h>

int ispalindrome(int a);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if(ispalindrome(n))
     printf("number is palindrome");
    else
     printf("number is not palindrome");

     return 0;

}
int ispalindrome(int a)
{ int orig,rev=0,rem;
   orig=a;
     
  while(a>0)
  {rem=a%10;
    rev=rev*10 + rem;
    a=a/10;
  }
if(orig==rev)
return 1;
else
return 0;
}
