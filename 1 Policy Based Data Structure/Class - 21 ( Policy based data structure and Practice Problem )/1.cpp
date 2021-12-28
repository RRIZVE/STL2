//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    set<int>s={1,2,3,4,6,8,9};

    cout<<*lower_bound(s.begin(),s.end(),6)<<endl;//6
    cout<<*lower_bound(s.begin(),s.end(),5)<<endl;//6

    set<int>s1={10,20,30,40,60,110,120};
    cout<<*lower_bound(s1.begin(),s1.end(),30)<<endl;//30
    cout<<*lower_bound(s1.begin(),s1.end(),80)<<endl;//110













    return 0;
}
