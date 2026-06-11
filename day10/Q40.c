#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter number of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
        {
          printf(" ");
        }
         char ch='A';  
        for(j=1;j<=i;j++)
      
            {
              printf("%c",ch);
              ch++;
            }
         ch=ch-2;
        for(j=i-1;j>=1;j--)
         {
          printf("%c",ch) ; 
          ch--;
           }
     printf("\n");
          }
     return 0;
    
}
    
