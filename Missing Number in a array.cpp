// MISSING NUMBER IN AN ARRAY

#include <bits/stdc++.h>
using namespace std;

int missingnumber(vector<int>& array,int n){
	int sum;
	sum = accumulate(array.begin(),array.end(),0);
	int sums = (n*(n+1)) / 2;    // sum of n natural numbers
	return sums - sum;
}

int main(){
	int t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n;
		vector<int> array(n-1);
		for(int i=0;i<n-1;i++){
			cin >> array[i];
		}
		
		int result = missingnumber(array,n);
		cout << result << " "<<endl;
	}
	return 0;
}