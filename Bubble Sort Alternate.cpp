
// Bubble sort - alternate algorithm

#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        bool s = false;
        for(int j=0;j<i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                s = true;
            }
        }
        if(s==false)
            break;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {7,4,2,5,3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    print(arr,n);
}