#include<stdio.h>
int main()
{
        int n,i,rem;
        printf("\n...TO PRINT THE ODD NUMBERS...\n");
        printf("\nEnter n:");
        scanf("%d",&n);
        printf("Odd numbers upto %d",n);
        for(i=1;i<=n;i++)
        {
                rem=i%2;
                if(rem!=0)
                        printf("\t%d",i);
        }
        printf("\n");
        return 0;
}
