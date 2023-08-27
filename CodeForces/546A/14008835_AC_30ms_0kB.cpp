#include<stdio.h>
int main()
{
    int k,n,w,s,i;
    scanf("%d %d %d",&k,&n,&w);
    s=k*(w*(w+1)/2.0);
    if(s>n)
    {
        i=s-n;
       printf("%d",i);

    }
    else
        {
        printf("0");
    }
    return 0;

}
