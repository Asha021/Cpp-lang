#include<iostream>
#include<string>
using namespace std;
int main(){
	string str = "abbae";
	int temp;
	char a[10] = {'a','e'};
	int l = sizeof(a)/sizeof(int);
	for(int i=0; i<str.size(); i++)
	{
		if(str[i]==a[10])
		{
//			temp = str[i];
			cout<<"voval";
		}
	}
	cout<<"voval1";
} 
