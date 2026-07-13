#include<stdio.h>
int main()
{
        int rem, n,ori,s=0;
        printf("\n...TO FIND THE SUM OF DIGITS...\n");
        printf("\nEnter n:");
        scanf("%d",&n);
        ori=n;
        while(n>0)
        {
                rem=n%10;
                s=s+rem;
                n=n/10;
        }
        printf("The sum of digits in %d is %d\n",ori,s);
        return 0;
}
