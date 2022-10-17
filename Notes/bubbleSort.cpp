#include <iostream>

using namespace std;

//bubble sort
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
    
    for(auto i : arr)
    cout<<i<<" ";

    return 0;
}
