#include<stdio.h>
int main()
{
    int n,d[101],a,b,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=a-1;i<b-1;i++)
    {
        s=s+d[i];
    }
    printf("%d",s);
    return 0;
}
