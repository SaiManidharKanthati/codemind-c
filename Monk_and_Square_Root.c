#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,j;
        scanf("%lld%lld",&a,&b);
        int k=0;
        for( j=0;j<b;j++)
        {
            if(j*j%b==a)
            {
                printf("%lld
",j);
                k++;
                break;
            }
        }
        if(k==0)
        {
            printf("-1
");
        }
    }
}