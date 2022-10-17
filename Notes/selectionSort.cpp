#include <iostream>

using namespace std;

//selection sort
int main()
{
    int arr[] = {5,1,9,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = 0;
    for(int i = 0;i<n;i++){
        min = i;
        for(int j = i+1;j<n;j++){
            if(arr[min] > arr[j]) min = j;
        }
        swap(arr[i],arr[min]);
    }
    
    
    for(auto i : arr)
    cout<<i<<" ";

    return 0;
}
