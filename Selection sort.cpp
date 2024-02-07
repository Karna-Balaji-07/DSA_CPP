// SELECTION SORT

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[mini] > arr[j])
                mini = j;
        }
        if(mini != i)
            swap(arr[mini],arr[i]);
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {6,4,2,5,3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    print(arr,n);
}