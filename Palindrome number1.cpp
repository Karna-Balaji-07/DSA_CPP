// Palindrome number

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
	if(n < 0) return false;
	
	long long reversed = 0;
	long long nums = n;
	while(nums != 0){
		int digit = nums % 10;
		reversed = (reversed * 10) + digit;
		nums = nums / 10;
	}
	return reversed == n;
}

int main(){
	int n;
	cin >> n;
	
	isPalindrome(n);
	return 0;
}