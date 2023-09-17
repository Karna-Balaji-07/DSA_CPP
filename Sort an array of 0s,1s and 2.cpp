// sort an array of 0,1, and 2

#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[],int n){
	int mid = 0;
	int low = 0;
	int high = n-1;
	
	while(mid <= high){
		
		if (arr[mid] == 0){
			swap(arr[mid++],arr[low++]);
			
		}
		
		else if (arr[mid] == 1){
			mid++;
		}
		else{
			swap(arr[mid],arr[high--]);
		}
	}
}

int main(){
	arr[] = {0,1,2,1,0};
	n = sizeof(arr) / sizeof(arr[0]);
	sorting(arr,n);
	for(int i=0;i<n;i++){
		cout<< arr[i] << " ";
	}
	return 0;
}