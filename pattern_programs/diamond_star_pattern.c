#include<stdio.h>
int main()
{
   int i,j,m,n,t;
   printf("\n..PATTERN..\n");
   printf("Enter an odd value for n:");
   scanf("%d",&n);
   m=(n/2)+1;
   t=m;
   for(i=1;i<=t;i++)
   {
      for(j=1;j<=i+(n/2);j++)
      {
         if(j<m)
            printf("\t");
         else if(j>=m && j<=i+(n/2))
            printf("\t*");
         else
            break;
      }
      m--;
      printf("\n");
   }
   m=m+2;
   for(i=i-2;i>=1;i--)
   {
      for(j=1;j<=i+(n/2);j++)
      {
         if(j<m)
            printf("\t");
         else if(j>=m && j<=i+(n/2))
            printf("\t*");
         else
            break;
      }
      m++;
      printf("\n");
   }
   return 0;
}
