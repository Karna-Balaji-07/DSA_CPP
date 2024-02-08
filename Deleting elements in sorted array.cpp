// Deleting Elements from sorted arrays

#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int low, int high, int key)
{
    if(high >= low)
    {
        int mid = (high+low)/2;
        if(arr[mid]==key)
            return mid;
        
        if(arr[mid] > key)
            return findElement(arr,low,mid-1,key);
            
        return findElement(arr,mid+1,high,key);
    }
    return -1;
}

int deleteelement(int arr[], int n, int key)
{
    int pos = findElement(arr,0,n-1,key);
    for(int i=pos;i<=n-1;i++){
        arr[i] = arr[i+1];
    }
    return  n-1;
}

int main()
{
      int i;
    int arr[] = { 10, 20, 30, 40, 50 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int res = deleteelement(arr,n,key);
    for(int i=0;i<res;i++)
    cout << arr[i] <<  " " ;
    
    return 0;
}