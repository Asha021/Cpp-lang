#include<iostream>
using namespace std;

template<class a1 ,class a2 ,class a3>
class Opr1{
	private:
		a1 a;
		a2 b;
		a3 c;
		public:
			Opr1(a1 a,a2 b,a3 c){
				this -> a = a;
				this -> b = b;
				this -> c = c;
			}
		int Add(a1 a,a2 b){
			return a+b;
		}
		int Add2(){
			return this -> a + this -> b + this -> c;
		}	
}; 
int main(){
	Opr1 <int ,int, int>g(2,3,8);
	cout<<g.Add(5,7)<<endl<<g.Add2();
}
