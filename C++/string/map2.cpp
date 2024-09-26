#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,map<int,string>> database;
    
	map<int	,string> temp;
	temp.insert(make_pair(1,"A"));
	temp.insert(make_pair(2,"B"));
	
	map<int,string> temp2;
	temp2.insert(make_pair(3,"kabaddi"));
	temp2.insert(make_pair(4,"criket"));
	
	database.insert(make_pair("0X1",temp));
	database.insert(make_pair("0X2",temp2));
	
	map<string,map<int,string>>:: iterator i;
	for(i=database.begin(); i!=database.end(); i++){
		cout<<i -> first<<endl;
	    map<int,string>:: iterator j;
	    for(j = i -> second.begin(); j != i -> second.end(); j++){
	        cout<<(j->first)<<" "<<j -> second<<endl;
	    }
	}
}
