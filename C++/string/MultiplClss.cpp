#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"HEYYY A\n";
		}
}; 
class B{
	public:
		B(){
			cout<<"HEYYY B\n";
		}
}; 
class C{
	public:
		C(){
			cout<<"HEYYY C\n";
		}
}; 
class D : public A,public B,public C{
	public:
		D(){
			cout<<"HEYYY D\n";
		}
}; 
int main(){
	D cll;
}
