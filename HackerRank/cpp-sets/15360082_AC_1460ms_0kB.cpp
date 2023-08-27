#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    
    set <int> s;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int y = 0, x = 0;
        cin >> y;
        cin >> x;
        if (y == 1)
            s.insert(x);
        else if (y == 2)
            s.erase(x);
        else
        {
            set<int>::iterator itr=s.find(x);
            if (itr == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}