#include <bits/stdc++.h>

using namespace std;

bool Binary_Search(int arr[],int n,int key){
    int low = 0,high = n - 1;

    while(low <= high){
        int m = (low + high)/2;

        if(arr[m] == key) return 1;

        if(arr[m] > key) high = m - 1;
        else{
            low = m + 1;
        }
    }

    return 0;
}
int main(){
    return 0;
}
