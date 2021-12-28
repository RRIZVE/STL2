#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int n,i;
    string str;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>str;
        s.insert(str);
    }
    cout<<endl<<endl;
    for(auto u:s)
    {
        cout<<u<<endl;
    }






}





