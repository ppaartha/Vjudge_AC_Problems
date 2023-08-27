#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    map<string,int> a;
    while(n--)
    {
        string b;
        cin>>b;
        a[b]++;
        if(a[b]==1)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<b<<a[b]-1<<endl;
        }
    }
    return 0;
}
