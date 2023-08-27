#include <bits/stdc++.h>
using namespace std;
long long k;
int q(int n)
{

    if(n==1)
    {
        return 1;
    }
    return (q(n-1) + k - 1) % n+1;

}
int main()
{
    int t;
    cin>>t;

    for (int i= 1; i<= t; ++i)
    {
        int n;
        scanf("%d",&n);
        scanf("%lld",&k);
        printf("Case %d: %d\n",i, q(n));
    }

}


