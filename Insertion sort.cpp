// INSERTION SORT

#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n){
    for(int i=0;i <= n-1; i++){
        int j=i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {7,4,6,2,3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    print(arr,n);
}