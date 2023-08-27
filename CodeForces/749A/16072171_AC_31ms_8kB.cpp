#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,a,b,c;
    scanf("%d",&n);
    if(n%2==0)
    {
        b=n/2.0;
        printf("%d\n",b);
        for(i=0;i<b;i++)
        {
            printf("2 ");
        }
    }
    else
    {
        a=(n/2.0)-1;
        c=a+1;
        printf("%d\n",c);
        for(i=0;i<a;i++)
        {
            printf("2 ");
        }
        printf("3");
    }
    return 0;

}

