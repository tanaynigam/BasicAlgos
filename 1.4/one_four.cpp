#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char str[1000];
	int max, flag;
	flag = 0;

	cout<<"Enter a String: ";
	cin.getline(str, 1000, '\n');
	
	for(max = 0; str[max]!='\0'; max++);

	for(int i=0; i<max; i++){
		for(int j=i+1; j<max; j++){
			if (str[i] == str[j]){
				flag++;
				break;
			}
		}
	}

	if (flag == max/2)
		cout<<"True";
	else
		cout<<"False";

	cout<<"\n";

	return 0;
}