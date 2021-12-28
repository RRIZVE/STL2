#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;//1 hoba first element;
    q.pop();//first element delete
    cout<<q.front()<<endl;//2 hoba first element;
}
