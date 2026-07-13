#include<stdio.h>
int main()
{
        int t1=0,t2=1,n,res,i;
        printf("\n...TO PRINT THE FIBONACCI SERIES...\n");
        printf("Enter n:");
        scanf("%d",&n);
        printf("%d\n%d",t1,t2);
        for(i=1;i<=n;i++)
        {
                res=t1+t2;
                printf("\t%d",res);
                t1=t2;
                t2=res;
        }
        printf("\n");
        return 0;
}
