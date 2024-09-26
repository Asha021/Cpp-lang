#include<iostream>
using namespace std;
class Add2;
class Add{
	private:
		int val;
		string str;
		int val2;
	public:	
	 	Add(){
	 		this -> val = 180;
	 		this -> val2 = 80;
	 		this -> str = "Asha";
		 }
	friend void Go1(Add & a);
	friend void Go2(Add & ab,Add2 & ad);
};
class Add2{
	private:
		int a1;
		int b2;
		public:
			Add2(){
				this -> a1 = 20;
				this -> b2 = 30;
			}
			friend void Go2(Add & ab,Add2 & ad);
};
void Go1(Add & a){
	cout<<a.val<<endl;
}
void Go2(Add & ab,Add2 & ad){
	cout<<ab.val+ad.a1;
}
int main(){
	Add s;
	Add2 a2;
	Go1(s);
	Go2(s,a2);
}
