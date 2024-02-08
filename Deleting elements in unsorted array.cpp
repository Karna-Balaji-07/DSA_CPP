// Deleting elements in an unsorted array

#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n, int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int deleteElement(int arr[], int n, int key)
{
    int pos = findElement(arr,n,key);
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

int main()
{
    
    int i;
    int arr[] = { 10, 50, 30, 40, 20 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int res = deleteElement(arr,n,key);
    for(i=0;i<res;i++)
        cout << arr[i] << " ";
        
    return 0;
 
}

















