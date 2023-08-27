#include<stdio.h>
int main()
{
    int a,b,m,s=0;
    scanf("%d %d",&a,&b);
s=a;
 while(1)
  {
      m=a/b;
      s+=m;
      a=m+(a%b);

      if(a<b)break;

  }
  printf("%d",s);
  return 0;
}
