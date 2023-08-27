#include<stdio.h>
int main()
{
    int n;
    char s;
    scanf("%d%c",&n,&s);
    if(n>=1&&n<=2&&(s=='A'||s=='D'))
    {
        printf("window");
    }
    else if(n>=3&&n<=20&&(s=='A'||s=='F'))
    {
        printf("window");
    }
    else if(n>=21&&n<=65&&(s=='A'||s=='K'))
    {
        printf("window");
    }
    else if(n>=1&&n<=2&&(s=='A'||s=='B'||s=='C'||s=='D'))
    {
        printf("aisle");
    }
    else if(n>=3&&n<=20&&(s=='B'||s=='C'||s=='D'||s=='E'))
    {
        printf("aisle");
    }
    else if(n>=21&&n<=65&&(s=='C'||s=='D'||s=='G'||s=='H'))
    {
        printf("aisle");
    }
    else
    {
        printf("neither");
    }
   return 0;
}
