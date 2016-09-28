#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){

	string str;

	cout<<"Enter a String: ";
	cin>>str;

	const char *s = str.c_str();

	for(int i=0; i<str.length(); i++){
		cout<<s[i];
	}
	cout<<"\n";

	int flag = 0;

	for(int i=0; i<str.length(); i++)
	{
		int c = s[i];

		for(int j=i+1; j<str.length(); j++){
			if(c == s[j]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			break;
	}

	if(flag == 1)
		cout<<"Not Unique\n";
	else
		cout<<"Unique\n";

	return 0;
}
