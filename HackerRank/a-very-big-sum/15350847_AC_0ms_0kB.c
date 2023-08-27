#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int ara[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=ara[i];
    }
    printf("%lld",sum);
    return 0;
}
