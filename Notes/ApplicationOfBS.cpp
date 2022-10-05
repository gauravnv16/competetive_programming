#include <bits/stdc++.h>

using namespace std;
//lower bound and upper bound are applications of binary search
// count the occurrence of a particular number
int main(){
    vector<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(2);
    l.push_back(2);
    l.push_back(3);

    auto lb = lower_bound(l.begin(), l.end(),2);
    auto ub = upper_bound(l.begin(), l.end(),2);

    cout<< ub - lb;
    return 0;
}