// Remove duplicates from sorted array

#include <bits/stdc++.h>
using namespace std;

int remove(vector<int>& nums){
	int j = 1;
	for (int i = 1;i<nums.size(),i++){
		if(nums[i] != nums[i-1]){
			nums[j] = nums[i];
			j++;
		}
	}
	return j;
}

int main(){
	vector<int> nums = {1,1,2,3,3,4,5,5,6};
	remove(nums);
	return 0;
}

