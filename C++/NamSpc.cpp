#include<iostream>
#define k using
k namespace std;

namespace first{
	int a,b,c;
	int f1(int a, int b){
		cout<<a+b;
	}
	int f2(int a, int b){
		cout<<a%b;
	}
	int f2(int a, int b, int c){
		cout<<a-b-c;
	}
	int f4(){
		return a*b;
	}
	
}
namespace sec{
	namespace sec1{
	int a=0;
	int b=0;
	}
	int a=0;
	int b=0;
}  
int main(){
	cout<<"ENTER 1 for add\n";
    cout<<"ENTER 2 for module\n";
    cout<<"ENTER 3 for sub\n";
    cout<<"ENTER 4 for mul\n";
    cout<<"ENTER 5 for divide\n";
  
	int user;
	cin>>user;
    

switch(user){
	case 1:{
	cout<<"Enter two no\n";
	cin>>first::a>>first::b;
	first::f1(first::a,first::b);
	break;
	}
	case 2:{
	cout<<"Enter two no\n";
	cin>>first::a>>first::b;
//	cout<<first::a%first::b<<endl;
	first::f2(first::a,first::b);
		break;
	}
	case 3:{
	cout<<"Enter three no\n";
	cin>>first::a>>first::b>>first::c;
//	cout<<first::a-first::b<<endl;
    first::f2(first::a,first::b,first::c);
		break;
	}
	case 4:{
	cout<<"Enter two no\n";
	cin>>first::a>>first::b;
//	cout<<sec::a*sec::b<<endl;
    cout<<first::f4();
		break;
	}
	case 5:{
	cout<<"Enter two no\n";
	cin>>sec::sec1::a>>sec::sec1::b;
	cout<<sec::sec1::a/sec::sec1::b<<endl;
		break;
	}
}
}
