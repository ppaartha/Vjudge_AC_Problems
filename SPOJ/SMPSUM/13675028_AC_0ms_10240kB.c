#include<stdio.h>
int main()
{
    int a,b,sum=0,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum+=a*a;
        a++;
    }
    printf("%d",sum);
    return 0;
}
