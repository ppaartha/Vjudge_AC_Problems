#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double a, b, c, r, AD=0;
        cin>>a>>b>>c>>r;

        AD=sqrt((r)/(1+r))*a;
    printf("Case %d: ",i);
    printf("%0.8lf\n",AD);

    }

    return 0;
}
