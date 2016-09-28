#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char str1[1000], str2[1000];
	int max1, max2;
	int flag=0;

	cout<<"Enter a String: ";
	cin.getline(str1, 1000, '\n');

	for(max1=0; str1[max1]!='\0'; max1++);

	cout<<"Enter second String: ";
	cin.getline(str2, 1000, '\n');

	for(max2=0; str2[max2]!='\0'; max2++);

	if(max1 == max2){
		for(int i=0; i<max1; i++){
			if(str1[i]==str2[i]){
				flag++;
			}
		}

		if(flag == max1 || flag == (max1-1)){
			cout<<"True\n\n";
		}else
		cout<<"False\n\n";
	}
	else if(max1 == (max2-1) || max2 == (max1-1)){
		for(int i=0, j=0; i<max1; i++){
			if(str1[i] == str2[j]){
				j++;
				flag++;
			}
		}

		if(max1 == (max2-1) && flag==max1)
			cout<<"case: True\n\n";
		else if(flag == (max1-1))
			cout<<"True\n\n";
		else
			cout<<"False\n\n";
	}
	else{
		cout<<"False\n\n";
	}

	return 0;

}