// Remove element

#include <bits/stdc++.h>
using namespace std;

int remove(vector<int> &nums,int key){
	int index = 0;
	for(int i=1;i<nums.size();i++){
		if(nums[i] != key){
			nums[index] = nums[i];
			index++;
		}
	}
	return index;
}

int main(){
	vector<int> nums = {1,1,2,3,2,4,5,7,6,7};
	int key = 2;
	remove(nums,k);
	return 0;
}