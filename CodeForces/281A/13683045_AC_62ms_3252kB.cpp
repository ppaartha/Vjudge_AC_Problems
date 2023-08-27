#include<stdio.h>
int main()
{
    char ara[1005];
    scanf("%s", ara);
    if(ara[0]>='a'&&ara[0]<='z')
    {
        ara[0]=ara[0]-32;
    }
    printf("%s", ara);
    return 0;
}
