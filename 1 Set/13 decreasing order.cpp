#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int,greater<int>>s;

    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(4);

    for(auto u:s)
    {
        cout<<u<<endl;//5 4 3 2 1
    }






}





