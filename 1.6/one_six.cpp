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
	int max, j;
	int count[1000], pos[1000];
	int size =0;

	cout<<"Enter a String: ";

	cin.getline(str, 1000, '\n');

	for(max=0; str[max]!='\0'; max++);

	for(int i=0; i<max; i++){

		if(str[i] == str[i+1])
			count[j]++;
		else if(str[i]!=str[i+1] && str[i]==str[i-1]){
			count[j] = 1;
			j++;
		}


		if(count[j] == 1){
			pos[j] = i+1;
		}
	}

	for(int i=0; i<j; i++)
		cout<<count[i];
	cout<<"\n\n";

	for(int i=0; i<j; i++)
		cout<<pos[i];
	cout<<"\n\n";

	char new_str[1000];
	j = 0;
	int total = 0;

	for(int i=0; str[i+total]!='\0'; i++){
		if(i+total == pos[j]){
			new_str[i] = count[j]+1;
			j++;
			total = total+count[j]-2;
		}
	else
		new_str[i]=str[i+total];

	size++;
	}


	for(int i=0; i<size; i++)
		cout<<new_str[i];

	cout<<"\n\n";
	return 0;
}