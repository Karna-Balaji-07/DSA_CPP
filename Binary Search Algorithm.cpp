// Binary Search Algorithm

#include <bits/stdc++.h>
using namespace std;

int iterative(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;
    while(high >= low)
    {
        int mid = (high+low)/2;
        
        if(arr[mid]==key)
            return mid;
            
        if(arr[mid] > key)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int recursive(int arr[], int low, int high, int key)
{
    if(high >= low)
    {
      int mid = (high + low)/2;
      
      if(arr[mid]==key)
      return mid;
      
      if(arr[mid] > key)
        return recursive(arr,low,mid-1,key);
        
    return recursive(arr,mid+1,high,key);
    }
    return -1;
}

int main()
{
    
    int arr[] = { 2, 3, 4, 10, 40 };
    int key = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res1 = iterative(arr,n,key);
    int res2 = recursive(arr,0,n-1,key);
    cout << res1 << " " << res2 << endl;
    return 0;
}