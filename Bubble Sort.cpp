// Bubble sort

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
	for(int i=n-1; i>=0; i--)
	{
		for(int j=0;j<i-1;j++)
		{
			if(arr[j] > arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}

void print(int arr[], int n){
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
}

int main(){
	int arr[] = {5,3,4,7,6,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,n);
	print(arr,n);
}