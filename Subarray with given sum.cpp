// Subarray with Given sum
#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>arr, int n, long long s){
	int last = 0;
	int start = 0;
	unsigned long long current_sum = 0;
	bool flag = false;
	vector<int> res;
	
	for(int i =0 ;i<n;i++)
	{
		current_sum += arr[i];
		
		if (current_sum >= s)
		{
			last = i;
			while(s < current_sum && start < last)
			{
				current_sum -= arr[start]
				++start;
			}
			if (current_sum == s)
			{
		   		res.push_back(start+1);
				res.push_back(last+1);
				flag = true;
				break;
			}
		}
		
	}
	if (flag == false){
		res.push_back(-1);
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long s;
		cin >> n >> s;
		vector <int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		
		vector <int> res;
		res = subarraysum(arr,n,s);
		for(int j=0;j<res.size();j++){
			cout << res[j] << " ";
		}
		cout << endl;
		
	}
}