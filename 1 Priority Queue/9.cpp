//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//log2(n)

int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;

    priority_queue<pair<int,int>>q;

    q.push({1,-2});
    q.push({3,-3});
    q.push({4,-1});
    q.push({4,-1});
    q.push({4,-3});
    q.push({4,-2});
    q.push({2,-6});
    q.push({2,-1});

    while(!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second*(-1)<<endl;
        q.pop();
    }
    /*1 2
    2 1
    2 6
    3 3
    4 1
    4 1
    4 2
    4 3*/









    return 0;
}
