#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v = {2,3,4,7};
	v.push_back(234);
	v.push_back(234);
	v.push_back(234);
	v.push_back(234);
	v.p
	ush_back(234);
	v.push_back(234);
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<"-";
	}
	cout<<"\n";
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	return 0;

}
