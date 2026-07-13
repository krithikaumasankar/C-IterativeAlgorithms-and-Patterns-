#include<stdio.h>
#include<math.h>
int main()
{
        int n,c=0,s=0,ori,rem;
        printf("\n...TO CHECK WHETHER THE GIVEN NUMBER IS ARMSTRONG OR NOT...\n");
        printf("\nEnter n:");
        scanf("%d",&n);
        ori=n;
        while(n>0)
        {
                c=c+1;
                n=n/10;
        }
        n=ori;
        while(n>0)
        {
                rem=n%10;
                s=s+(pow(rem,c));
                n=n/10;
        }
        if(ori==s)
                printf("\n%d is an armstrong number\n",ori);
        else
                printf("\n%d is not an armstrong number\n",ori);
        return 0;
}
