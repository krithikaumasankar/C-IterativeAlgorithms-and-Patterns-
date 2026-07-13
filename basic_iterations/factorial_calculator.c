#include<stdio.h>
int main()
{
        int n,i,fact=1;
        printf("\n...TO PRINT THE FACTORIALS...\n");
        printf("\nEnter n:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
                fact=fact*i;
        printf("The factorial of %d is %d\n",n,fact);
        return 0;
}
