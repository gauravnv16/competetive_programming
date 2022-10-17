#include<iostream>

using namespace std;
//QuickSort
int lemutoPartion(int arr[],int l,int h){
    int p = arr[h];
    int i = l - 1;
    
    for(int j = l;j<=h;j++){
        if(arr[j]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}

void Qsort(int arr[],int l,int h){
    if(l<h){
        int p = lemutoPartion(arr,l,h);
        Qsort(arr,l,p-1);
        Qsort(arr,p+1,h);
    }
}
int main(){
    int arr[] = {5,1,6,2,9};
    int n = 5;
    
    Qsort(arr,0,n-1);
    
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}