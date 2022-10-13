/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

long long int fib(int n,vector<long long int> &v){
    if(v[n] != 0) return v[n];
    
    if( n<= 2 ) return 1;
    
    v[n] = fib(n-1,v) + fib(n-2,v);
    
    return v[n];
}
// 0 1 1 2
int main()
{   
    int n;
    cin>>n;
    vector<long long int> v(n);
    cout<<fib(n,v);
    return 0;
}
