#include<stdio.h>
int main()
{
    int n,m,ts;
    scanf("%d %d",&n,&m);
    if(m>n)
    {
        printf("-1");
        return 0;

    }

      if(n % 2 == 0)
    {
        ts = n / 2;
    }
    else
    {
        ts = (n / 2) + 1;
    }

    while(ts % m != 0)
    {
        ts++;
    }
    printf("%d",ts);
    return 0;

}
