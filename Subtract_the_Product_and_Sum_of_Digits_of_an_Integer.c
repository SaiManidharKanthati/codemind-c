#include<stdio.h>
int main()
{
    int n,rem,s=0,m=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        s=s+rem;
        m=m*rem;
        n=n/10;
    }
    printf("%d",m-s);
}