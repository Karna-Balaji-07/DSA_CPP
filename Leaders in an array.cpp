// Leaders in an array

#include <bits/stdc++.h>
using namespace std;

void leaders(int arr[],int m){
	vector<int> list;
	int maxx = arr[m-1];
	for(int i=n-1;i>=0,i--){
		if (arr[i] >= maxx){
			maxx = arr[i];
			list.push_back(maxx);
		}
		
	}
	
	reverse(list.begin(),list.end());
	return list;
}

int main(){
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	vector<int> leaders = leaders(arr,n);
	for(int i=0;i<leaders.size();i++){
		cout  << leaders[i] << " ";
	}
	cout << " " << endl;
	return 0;
	
}