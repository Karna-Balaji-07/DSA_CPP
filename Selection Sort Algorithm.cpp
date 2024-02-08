// Selection sorting algorithm

#include <bits/stdc++.h>
using namespace std;

void selection(int arr[], int n)
{
    for(int i = 0; i < n-1 ; i++)
    {
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[mini] > arr[j])
            mini = j;
        }
        if(mini != i)
        swap(arr[mini], arr[i]);
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
    int arr[] = { 64, 25, 12, 22, 11 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    selection(arr,n);
    print(arr,n);
    return n;
}