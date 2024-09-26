#include<iostream>
#include<string>
using namespace std;


int main(){
	string str = "asha pal";
	getline(cin,str,'\n');

	str[0]=str[0]-32;
	for(int i=0; i<str.length(); i++){
		if((str[i-1]==' ') && str[i]>='a' && str[i]<'z'){
			str[i]=str[i]-32;
		}	  	
	}
	cout<<str;
}
