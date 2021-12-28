#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s= {2,2,1,3,3,4,1,2,3,4,1,2,2,5,3,3};



    s.erase(s.begin());



    for(auto u:s)
        cout<<u<<endl;

   cout<<endl<<endl;

    s.erase(--s.end());


    for(auto u:s)
        cout<<u<<endl;




}





