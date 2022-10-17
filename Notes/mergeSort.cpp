/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int arr[],int l,int mid,int r){
    int m = mid-l+1;
    int n = r-mid;
    int left[m],right[n];
    for(int i = 0;i<m;i++) left[i] = arr[l+i];
    
    for(int j = 0;j<n;j++) right[j] = arr[mid+j+1];
    
    int i = 0,j = 0,k = l; 
    
    while(i<m and j<n){
        if(left[i] <= right[j]){
            arr[k++] = left[i];i++;
        } else {
            arr[k++] = right[j];j++;
        }
    }
    
    while(i<m) {arr[k++] = left[i];i++;}
    while(j<n) {arr[k++] = right[j];j++;}

}

void mergeSort(int arr[],int l,int r){
    if(r>l) {
        int mid = l + (r - l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
    int arr[4] = {5,1,6,9};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr,0,arr_size-1);
    
    for(int i = 0;i<arr_size;i++)cout<<arr[i]<<" ";
    return 0;
}
