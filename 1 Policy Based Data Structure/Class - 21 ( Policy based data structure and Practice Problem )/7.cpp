//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
//less_equal  ar jonno eta fully multi set hoba

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item



int main()
{
    optimize();
    ordered_set ps;

    ps.insert(1);
    ps.insert(2);
    ps.insert(2);
    ps.insert(4);
    ps.insert(4);
    ps.insert(3);

    /// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

    cout<<ps.order_of_key(3)<<endl;//3>>1 2 2
    cout<<ps.order_of_key(4)<<endl;//4






     return 0;
    }
