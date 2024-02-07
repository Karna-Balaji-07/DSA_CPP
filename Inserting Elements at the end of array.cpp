// Inserting Element at the end of an Array

#include <bits/stdc++.h>
using namespace std;

int insertAtEnd(int arr[], int n, int capacity, int key)
{
    if(n >= capacity)
        return n;
    
    arr[n] = key;
    return (n+1);
}

int main()
{
        int arr[20] = {12, 16, 20, 40, 50, 70}; 
        int capacity= sizeof(arr) / sizeof(arr[0]);
        int n = 6;
        int key = 10;
        int res = insertAtEnd(arr,n,capacity,key);
        for(int i=0;i<res;i++){
            cout << arr[i] << " ";
        }
        return 0;
}

