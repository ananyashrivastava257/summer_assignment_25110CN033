#include<stdio.h>
int main()
{ int n,i,isprime=0;
    printf("program to find whether a number is prime or not:\n");
    printf("enter a number:");
    scanf("%d",&n);
 if(n<=1)
 {isprime=1;//means number is not prime
 }
 for(i=2;i<=n/2;i++)
   if(n%i==0)
    {
    isprime=1;
    break;
    }
 

 if(isprime==0)
 {printf("given number is prime");}
 else
 {printf("given number is not prime");}

 return 0;


}
 