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
           
        for(j=1;j<=2*i-1;j++)
            {
              printf("*");
            }
           
     printf("\n");
          }
     return 0;
    }
    
#
