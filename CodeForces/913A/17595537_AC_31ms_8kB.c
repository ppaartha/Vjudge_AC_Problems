#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,m,k,l;
    scanf("%d%d",&n,&m);
    l=pow(2,n);
    k=m%l;
    printf("%d",k);

    return 0;
}
