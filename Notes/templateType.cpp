#include <iostream>

using namespace std;
template <typename T>

T myFun(T x){
    return x;
}

int main()
{
    cout<<myFun<string>("Hello World");

    return 0;
}
