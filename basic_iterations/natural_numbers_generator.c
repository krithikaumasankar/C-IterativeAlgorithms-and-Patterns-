#include<stdio.h>
int main()
{
        int n,i;
        printf("\n...TO PRINT N NATURAL NUMBERS...\n");
        printf("\nEnter the N value:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                printf("%d\t",i);
        }
        printf("\n");
        return 0;
}
