#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {

        int n,m,j;
        string s;
        deque<int>a;
        cin>>n>>m;
        cout<<"Case "<<i<<":"<<endl;

        for(j=0; j<m; j++)
        {
            int k;
            cin>>s;

            if(s=="pushLeft")
            {
                cin>>k;
                if(a.size()== n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    cout<<"Pushed in left: "<<k<<endl;
                    a.push_front(k);
                }
            }
            else if(s=="pushRight")
            {
                cin>>k;
                if(a.size()== n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    cout<<"Pushed in right: "<<k<<endl;
                    a.push_back(k);
                }
            }
            else if(s=="popLeft")
            {
                if(a.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from left: "<<a.front()<<endl;
                    a.pop_front();
                }
            }
            else if(s=="popRight")
            {
                if(a.empty())
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    cout<<"Popped from right: "<<a.back()<<endl;
                    a.pop_back();
                }
            }
        }
    }

    return 0;
}
