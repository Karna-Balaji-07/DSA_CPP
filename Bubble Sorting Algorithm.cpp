// Bubble Sorting Algorithm

#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
    int i,j,temp;
    bool flag;
    for(int i=0;i<n;i++){
        flag = false;
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }
        if(flag==false)
        break;
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
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n= sizeof(arr) / sizeof(arr[0]);
    bubble(arr,n);
    print(arr,n);
    return 0;
}