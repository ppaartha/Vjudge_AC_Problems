#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double x,l,w,a,b,vol;
        scanf("%lf%lf",&l,&w);
        a=w+l;
        b=w*l;
        x=(a-sqrt(w*w+l*l-b))/6.0;
        vol=x*(w-2*x)*(l-2*x);
        printf("Case %d: %0.8lf\n",i,vol);
    }
    return 0;
}
