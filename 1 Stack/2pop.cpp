#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;//first element print kora//5 print hoba

    st.pop();//first element delete korba//5 delete hoi jaba
    cout<<st.top()<<endl;//first element print kora//4 print hoba
}
