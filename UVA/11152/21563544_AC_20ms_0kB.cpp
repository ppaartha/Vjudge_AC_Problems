#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        double sun,vio,ro,s,r1,r2,tri,x;
        s=(a+b+c)/2.0;
        tri=sqrt(s*(s-a)*(s-b)*(s-c));
        r1=(2*tri)/(a+b+c);
        ro=pi*r1*r1;
        r2=(a*b*c)/(4*tri);
        x=pi*r2*r2;
        sun=x-tri;
        vio=tri-ro;
        printf("%0.4lf %0.4lf %0.4lf\n",sun,vio,ro);

    }
    return 0;
}