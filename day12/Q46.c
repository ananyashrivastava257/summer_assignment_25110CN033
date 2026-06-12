#include<stdio.h>
#include<math.h>

int isarmstrong(int a);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    if(isarmstrong(n))
     printf("number is armstrong");
    else
     printf("number is not armstrong");

     return 0;

}
int isarmstrong(int a)
{ int orig,digit=0,count=0,rem;
   orig=a;
     
  while(a>0)
  {count=count+1;
    a=a/10;
  }
  a=orig;
  while(a>0)
  {rem=a%10;
    digit=digit + pow(rem,count);
    a=a/10;
  }

if(orig==digit)
return 1;
else
return 0;
}