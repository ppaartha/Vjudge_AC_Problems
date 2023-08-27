#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,x,y,c=0,b=0;
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            b++;

        }
        else if(s[i]>=97&&s[i]<=122)
        {
            c++;

        }
    }
        if(c>=b)
        {
          for(i=0;i<strlen(s);i++)
          {
              s[i]=tolower(s[i]);
          }
        }
        else
        {

           for(i=0;i<strlen(s);i++)
           {
               s[i]=toupper(s[i]);
           }
        }
        printf("%s",s);
        return 0;


}
