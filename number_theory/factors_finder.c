#include<stdio.h>
int main()
{
   int n,i;
   printf("\n..TO PRINT THE FACTORS OF THE NUMBER..\n");
   printf("Enter n:");
   scanf("%d",&n);
   printf("\nFactors of %d are:",n);
   for(i=1;i<=n;i++)
   {
      if(n%i==0)
         printf("%d\t",i);
   }
   printf("\n");
   return 0;
}
