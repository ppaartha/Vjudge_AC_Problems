#include<stdio.h>
int main()
{
    long long a, b, c, d, v=0;
    scanf("%I64d %I64d", &a, &b);
    while(1)
    {
        c=a/b;
        d=a%b;
        a=b;
        b=d;
        v+=c;
        if(d==0) break;
    }
    printf("%I64d", v);
    return 0;
}
