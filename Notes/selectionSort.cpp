/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5,1,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = 0;
    for(int i = 0;i<n;i++){
        min = i;
        for(int j = i + 1;j<n;j++){
            if(arr[min] > arr[j]) min = j;
        }
        
        swap(arr[min],arr[i]);
    }
    
    for(auto i : arr) cout<<i<<" ";
    return 0;
}
