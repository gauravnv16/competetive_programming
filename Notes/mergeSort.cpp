#include<iostream>

using namespace std;
//mergeSort
void merge(int arr[],int l,int mid,int h){
    int m = mid - l + 1;
    int n = h - mid;
    
    int *right = new int[m];
    int *left = new int[n];
    
    for(int i = 0;i<m;i++) left[i] = arr[l+i];
    for(int j = 0;j<n;j++) right[j] = arr[mid+1+j];
    
    int j = 0,i = 0,k=l;
    
    while(i<m && j<n){
        if(left[i] <= right[j]){
            arr[k ++] = left[i];
            i++;
        } else {
            arr[k ++] = right[j];
            j++;
        }
    }
    
    while(i<m) {arr[k ++] = left[i];i++;}
    
    while(j<n) {arr[k ++] = right[j];j++;}
    
}

void mergeSort(int arr[],int l,int h){
    if(l<h){
        int mid = l + (h-l)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main(){
    int arr[] = {5,1,6,2,9};
    int n = 5;
    
    mergeSort(arr,0,n);
    
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}