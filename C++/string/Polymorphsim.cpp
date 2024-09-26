 #include<iostream>
 using namespace std;
 class A{
 	public:
 		A(){}
		 void addA(){
		 		cout<<"A ka cons.\n";
		 }
 };
  class B{
 	public:
 		B(){}
		 void addA(){
		 		cout<<"B ka cons.\n";
		 }
 };
 int main(){
 	B g1;
 	g1.addA();
 }
