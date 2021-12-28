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

    priority_queue<int,vector<int>,greater<int>>q;

    q.push(1);
    q.push(3);
    q.push(4);
    q.push(4);
    q.push(2);
    q.push(2);

    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
    /*1
    2
    2
    3
    4
    4*/










    return 0;
}
