#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;++i)
    {
        string p;
        double a,b,c,x,y,s,r,angle;
        scanf("%lf%s%lf",&a,&s,&b);
        r=(sqrt(a*a+b*b))/2.0;
        angle=acos(((2*r*r)-(b*b))/(2*r*r));
        s=r*angle;
        c=400/(2*s+2*a);
        x=a*c;
        y=b*c;
        printf("Case %d: %0.8lf %0.8lf\n",i,x,y);

    }
    return 0;
}
