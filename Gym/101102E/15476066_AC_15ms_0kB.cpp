#include<stdio.h>
int main()
{
    long long int N;
     int a,b,i,T;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&N);
        if(N%5==0)
        {
            a=N/5.0;
            printf("%d\n",a);

        }
        else if(N%5!=0)
        {
            b=(N/5.0)+1;
            printf("%d\n",b);

        }
    }
    return 0;
}
