#include<bits/stdc++.h>
#define pi 3.1415926535897932384626433832795028841
using namespace std;

int main()
{
    int i,t;
    cin>>t;
   for(i=1;i<=t;i++)
    {
        double r1,r2,r3,a,b,c,a1,a2,a3,x,y,z,s,t1,t2,t3;
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        s=(a+b+c)/2.0;
        x=sqrt(s*(s-a)*(s-b)*(s-c));
        t1=acos((a*a+c*c-b*b)/(2.0*a*c));
        a1=0.5*r1*r1*t1;
        t2=acos((a*a+b*b-c*c)/(2.0*a*b));
        a2=0.5*r2*r2*t2;
        t3=acos((b*b+c*c-a*a)/(2.0*b*c));
        a3=0.5*r3*r3*t3;
        y=x-a1-a2-a3;
        printf("Case %d: %0.8lf\n",i,y);
    }
    return 0;
}