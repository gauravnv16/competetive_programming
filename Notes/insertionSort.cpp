#include <iostream>

using namespace std;

//insertion sort
int main()
{
    int arr[] = {5,1,9,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
    
    
    for(auto i : arr)
    cout<<i<<" ";

    return 0;
}
