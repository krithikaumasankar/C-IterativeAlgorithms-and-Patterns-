 #include<stdio.h>
int main()
{
        int n,s,rem,ori;
        printf("\n..TO CHECK PALINDROME OR NOT..\n");
        printf("Enter n:");
        scanf("%d",&n);
        ori=n;
        while(n>0)
        {
                rem=n%10;
                s=(s*10)+rem;
                n=n/10;
        }
        if(s==ori)
           printf("It is a palindrome..\n");
        else
           printf("It is not a palindrome..\n");
        return 0;
}
