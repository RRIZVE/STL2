#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string,greater<string >>s;

    s.insert("rizve");
    s.insert("fahim");
    s.insert("rahat");
    s.insert("taki");
    s.insert("taki");
    s.insert("jumman");
    s.insert("jumman");

    for(auto u:s)
    {
        cout<<u<<endl;
    }
    /*taki
    rizve
    rahat
    jumman
    fahim*/






}





