#include<iostream>
#include<string>
using namespace std;

int main(){
	string str = "qweqwew wqeehshjsh ee wehhj ee dddfdfdfeewe";
	int prvs=0;
	int nxt=0;
	for(int i=0; i<str.size(); i++){
		prvs=0;
		while(str[i]!=' ' && str[i] != str[str.size()+1])
	     {
	     	prvs++;
	     	i++;	     	 
		 }
		 nxt = max(prvs,nxt);	
	}	
	cout<<nxt<<endl;	
}


