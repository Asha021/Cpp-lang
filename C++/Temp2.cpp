#include<iostream>
using namespace std;

class A{
	private:
		int a;
		int b;
	public:
	A(int a, int b){
		this  -> a = a;
		this  -> b = b;
	}
	friend int operator >=(A a1,A b1);	
}; 

 int operator >=(A a1,A b1){
 	if(a1.a >= b1.a)
     {
        if(a1.b >= b1.b)
     	 return 1;
	 }
      return 0;
 }
 int main(){
 	A g(12,9h8);
 	A g1(1,38);
 	cout<<(g>=g1);
 }
