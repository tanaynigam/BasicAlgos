#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	string str1;
	string str2;
	int flag;

	cout<<"Enter first string: ";
	cin>>str1;
	cout<<"Enter second string: ";
	cin>>str2;

	if(str1.length() != str2.length()){
		cout<<"Not a palindrome";
		return 0;
	}

	const char *s1 = str1.c_str();
	const char *s2 = str2.c_str();

	for(int i=0; i<str1.length(); i++){
		for(int j =0; j<str2.length(); j++){
			if(s1[i] == s2[j]){
				flag = 1;
				break;
			}else{
				flag = 0;
			}
			}

		if(flag == 0){
		cout<<"The two Strings are not Palindromes\n";
		return 0;
		}
	}

	cout<<"The two Strings are Palindromes of each other\n";
	return 0;

}