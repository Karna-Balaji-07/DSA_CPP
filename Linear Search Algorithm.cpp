// Linear Search Algorithm

#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
      int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = LinearSearch(arr,n,x);
    cout << res << endl;
}