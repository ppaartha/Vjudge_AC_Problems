#include<bits/stdc++.h>
using namespace std;
string ar[5010];
string num_add(string a,string b)
{
    string x="";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int c=0;
    for(int i=0; i<a.size(); i++)
    {
        int s=a[i]-'0'+b[i]-'0'+c;
        x.push_back(s%10 +'0');
        c=s/10;
    }
    for(int i=a.size(); i<b.size(); i++)
    {
        int s=b[i]-'0'+c;
        x.push_back(s%10 +'0');
        c=s/10;
    }
    if(c)
    {
        x.push_back(c+'0');
    }
    reverse(x.begin(),x.end());
    return x;
}

void m()
{
    ar[0]="0";
    ar[1]="1";
    for(int i=2; i<5005; i++)
    {
        ar[i]=num_add(ar[i-2],ar[i-1]);
    }
}

int main()
{
    m();
    int n;
    while(cin>>n)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<ar[n]<<endl;
    }

}
