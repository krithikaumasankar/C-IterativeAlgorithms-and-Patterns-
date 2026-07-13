#include<stdio.h>
int main()
{
        int n,i=0,ori;
        printf("\n...TO FIND THE NUMBER OF DIGITS...\n");
        printf("\nEnter n:");
        scanf("%d",&n);
        ori=n;
        while(n>0)
        {
                i=i+1;
                n=n/10;
        }
        printf("The number of digits in %d is %d\n",ori,i);
        return 0;
}
