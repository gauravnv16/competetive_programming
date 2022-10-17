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
    for(int i = 0;i<n;i++){
        bool isSwapped = false;
        
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                isSwapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        
        if(isSwapped == false) break;
    }
    
    for(auto i : arr) cout<<i<<" ";
    return 0;
}
