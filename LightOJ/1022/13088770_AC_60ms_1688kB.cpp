#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
        int tc;cin>>tc;
        for(int i=1;i<=tc;i++)
        {
            double r;cin>>r;
            double sq=(r*2)*(r*2);
            double cir=2*acos(0.0)*r*r;
            double area=sq-cir;
            printf("Case %d: %.2lf\n", i, area);
        }
}


