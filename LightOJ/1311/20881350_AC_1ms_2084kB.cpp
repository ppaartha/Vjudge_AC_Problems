#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double v1,v2,v3,a1,a2,s,t1,t2,x,y,z;
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        s=((v1*v1)/(2*a1))+((v2*v2)/(2*a2));
        t1=v1/a1;
        t2=v2/a2;
        y=max(t1,t2);
        x=y*v3;
        printf("Case %d: %lf %lf\n",i,s,x);

    }
    return 0;
}
