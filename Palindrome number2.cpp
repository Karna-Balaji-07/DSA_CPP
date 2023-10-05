// Palindrome number 2

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
	if(n < 0 || n != 0 && n%10 ==0){
		return false;
	}
	int reversed = 0;
	int temp = n;
	while (n > reversed){
		reversed = (reversed * 10) + n %10;
		n /= 10;
	}
	return (n == reversed || n == reversed/10);
}

int main(){
	int n;
	cin >> n;
	isPalindrome(n);
	return 0;
}