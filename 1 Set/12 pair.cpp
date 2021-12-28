#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>>s;

    s.insert({1,2});
    s.insert({2,2});
    s.insert({2,2});
    s.insert({1,2});
    s.insert({5,2});
    s.insert({5,1});
    s.insert({5,1});
    s.insert({5,1});
    s.insert({1,1});
    s.insert({1,1});
    s.insert({1,2});

    for(auto u:s)
    {
        cout<<u.first<<"   "<<u.second<<endl;
    }


    /*1   1
    1   2
    2   2
    5   1
    5   2*/




}





