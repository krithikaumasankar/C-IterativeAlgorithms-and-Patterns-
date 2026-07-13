#include<stdio.h>
int main()
{
        int n,c=0,s=0,rem;
        printf("\n..TO PRINT THE SUM OF DIGITS IN ODD POSITIONS..\n ");
        printf("Enter n:");
        scanf("%d",&n);
        while(n>0)
        {
                c=c+1;
                if(c%2!=0)
                {
                        rem=n%10;
                        s=s+rem;
                }
                n=n/10;
        }
        printf("The sum of odd position digits from back is %d\n",s);
        return 0;
}
