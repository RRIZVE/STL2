//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    vector<int>s= {1,2,3,4,6,8,9,15,16,17};

    cout<<lower_bound(s.begin(),s.end(),6)-s.begin()<<endl;//4
    cout<<lower_bound(s.begin(),s.end(),10)-s.begin()<<endl;//7
    cout<<lower_bound(s.begin(),s.end(),3)-s.begin()<<endl;//2
    cout<<lower_bound(s.begin(),s.end(),20)-s.begin()<<endl;//10

    cout<<endl<<endl<<endl;
    s={1,2,2,3,3,4,6,6,8,9,15,15,16,17};

    cout<<lower_bound(s.begin(),s.end(),6)-s.begin()<<endl;//6
    cout<<lower_bound(s.begin(),s.end(),10)-s.begin()<<endl;//10
    cout<<lower_bound(s.begin(),s.end(),3)-s.begin()<<endl;//3
    cout<<lower_bound(s.begin(),s.end(),20)-s.begin()<<endl;//14














    return 0;
}
