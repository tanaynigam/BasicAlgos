#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{

//	string str;
	int space_no =0;
	int max;

	cout<<"Enter a String: ";
	char var[1000];
	cin.getline(var, 1000, '\n');

	for(max=0; var[max] != '\0'; max++);
	

	for(int i=0; i<max; i++){
		cout<<var[i];
	}

	cout<<"\n";

	for(int i=0; i<max+space_no; i++){
		if(var[i] == ' '){
		
			space_no+=2;
		
			for(int j=max+space_no; j>i; j--){
				var[j]=var[j-2];
			}
		
			var[i] = '%';
			var[i+1] = '2';
			var[i+2] = '0';

		}
		

	}


	for(int i=0; i<max+space_no; i++){
		cout<<var[i];
	}
	
	cout<<"\n\n";

	return 0;

}