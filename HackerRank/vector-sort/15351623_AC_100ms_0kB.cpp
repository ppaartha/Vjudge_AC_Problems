#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>v;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);

    }
    int size=v.size();
    sort(v.begin(),v.end());

    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;


}
