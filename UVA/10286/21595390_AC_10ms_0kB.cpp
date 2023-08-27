#include<bits/stdc++.h>
#define pi 4*atan(1)
using namespace std;
int main()
{
    double t;
    while(cin>>t)
    {
        double b,c,d;
        b=sin(108*(pi/180.0));
        c=sin(63*(pi/180.0));
        d=(b*t)/c;
        printf("%0.10lf\n",d);
    }
    return 0;
}
