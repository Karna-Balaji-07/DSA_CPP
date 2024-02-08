// Insertion Sorting Algorithm

#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
    int i,j,key;
    for(int i=1;i<n;i++){
        j = i-1;
        key = arr[i];
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void print(int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
    insertion(arr,N);
    print(arr,N);
    return 0;
}
