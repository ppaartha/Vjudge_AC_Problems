#include <stdio.h>

int main()
{
    int n;
    char s;
    scanf("%d%c",&n,&s);


    if(n >=1 && n<=2 )
    {
        if (s=='A'||s=='D')
        {
            printf("window");

        }
        else
        {
            printf("aisle");
        }
    }
    else if(n >= 3 && n <= 20 )
    {
        if ( s == 'A'||s== 'F')
        {
            printf("window");
        }
        else
        {
            printf("aisle");
        }
    }
    else if (n >= 21 &&n<= 65)
    {
        if (s== 'A'||s== 'K')
        {
            printf("window");
        }
        else if ((s >= 'C' && s <= 'D') ||(s>= 'G' && s<= 'H') )
        {
            printf("aisle");
        }
        else if(s!= 'I')
        {
            printf("neither");
        }
    }


    return 0;
}
