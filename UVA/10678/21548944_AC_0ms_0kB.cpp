#include<bits/stdc++.h>
#define pi 3.14159265358979323846264338
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double d,l,a,b;
        cin>>d>>l;
        b=sqrt((l/2)*(l/2)-(d/2)*(d/2));
        a=(d/2)+(l-d)/2.0;
        printf("%0.3lf\n",pi*a*b);
    }
    return 0;
}
