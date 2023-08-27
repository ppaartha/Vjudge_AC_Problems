#include<bits/stdc++.h>
#define pi 4*atan(1)
using namespace std;
int main()
{
    double l,w,h,t;
    while(cin>>l>>w>>h>>t)
    {
        double a,b,c,d;
        a=l*tan(t*(pi/180.0));
        if(a>h)
        {
            b=a-h;
            c=b/(tan(t*(pi/180.0)));
            d=0.5*(l-c)*h*w;
            printf("%0.3lf mL\n",d);

        }
        else
        {
            d=(l*w*h)-(0.5*a*l*w);
             printf("%0.3lf mL\n",d);
        }
    }
    return 0;
}
