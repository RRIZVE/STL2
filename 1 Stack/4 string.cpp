#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>st;

    st.push("rizve");
    st.push("fahim");
    st.push("rahat");
    st.push("taki");
    st.push("imtiaz");

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    /*5
    4
    3
    2
    1*/
}
