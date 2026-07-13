#include<stdio.h>
int main()
{
        int n,i,s=0;
        printf("\nTO PRINT THE SUM OF N NATURAL NUMBERS...\n");
        printf("\nEnter n value:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                s=s+i;
        }
        printf("The sum of %d natural numbers:%d\n",n,s);
        return 0;
}
