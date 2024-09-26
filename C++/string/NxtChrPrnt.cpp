#include<iostream>
#include<string>
using namespace std;
//int main(){
//	string a;
//	cin>>a;
//	for(int i=a.length(); i>=0; i--){
//		cout<<a[i];
//	}
//}

int main(){
	string a = "asha";
	cin>>a;
	for(int i=0; i<a.length(); i++){
		cout<<(char)(a.at(i)+1);
	}
}
