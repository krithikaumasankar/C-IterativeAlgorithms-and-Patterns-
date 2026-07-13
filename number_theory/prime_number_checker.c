#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,a=0;
   printf("\n..TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT..\n");
   printf("Enter n:");
   scanf("%d",&n);
   if(n<=1)
      a=1;
   else
   {
      for(i=2;i<=sqrt(n);i++)
      {
         if(n%i==0)
         {
            a=1;
            break;
         }
      }
   }
   if(a==0)
      printf("%d is a prime number.\n",n);
   else
      printf("%d is not a prime number.\n",n);
   return 0;
}
