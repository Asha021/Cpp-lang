#include<iostream>
using namespace std;
class Lead{
	public:
		Lead(){
			cout<<"heyy bro 1\n";
		}
};
class Wrkr1: public Lead{
	public:
		Wrkr1(){
			cout<<"heyy bro 2\n";
		}
}; 
class Wrkr2: public Lead{
	public:
		Wrkr2(){
			cout<<"heyy bro 3\n";
		}
}; 
class Wrkr3: public Lead{
	public:
		Wrkr3(){
			cout<<"heyy bro 4\n";
		}
};  
int main(){
	Wrkr3  cll1;
	Wrkr2  cll2;
	Wrkr1  cll3;
}
