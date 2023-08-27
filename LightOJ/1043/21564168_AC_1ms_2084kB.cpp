#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double a,c,b,r,x,y,z,s,d,ad;
       scanf("%lf%lf%lf%lf",&a,&c,&b,&r);
       s=(a+b+c)/2.0;
       x=sqrt(s*(s-a)*(s-b)*(s-c));
       y=x/(r+1);
       z=y*r;
       d=sqrt((z*b*b)/x);
       ad=(d*a)/b;
        printf("Case %d: %lf\n",i,ad);

    }
    return 0;
}