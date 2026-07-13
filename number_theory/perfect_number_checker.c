#include<stdio.h>
int main()
{
   int n,i,s=0;
   printf("\n..TO CHECK WHETHER THE GIVEN NUMBER IS PERFECT OR NOT..\n");
   printf("Enter n:");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
      if(n%i==0)
        s=s+i;
   }
   if(s==n)
      printf("\n%d is a perfect number",n);
   else
      printf("\n%d is not a perfect number",n);
   printf("\n");
   return 0;
}
