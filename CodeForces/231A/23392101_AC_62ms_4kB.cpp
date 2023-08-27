#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,d=0;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1&&b==1)||(b==1&&c==1)||(a==1&&c==1))
        {
            d++;
        }
    }
    cout<<d<<endl;

}
