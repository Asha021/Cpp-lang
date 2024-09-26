#include<iostream>
using namespace std;
class Add1{
	private:
		int First,Sec;
		public:
		Add1(int First, int Sec){
			this -> First = First;
			this -> Sec = Sec;
		}
	friend void operator +(Add1 com1,Add1 com2);	
};
class Add2{
	private:
		int f1,f2;
	 public:
	 	Add2(int f1,int f2){
	       this -> f1 = f1;
	       this -> f2 =  f2;
		 }
	friend void operator +(Add2 c1,Add2 c2);	 
}; 
    void operator +(Add1 com1,Add1 com2){
	cout<<com1.First/com2.First<<"+"<<com1.Sec*com2.Sec<<"i";
}
int main(){
	Add1 a1(2,9);
	Add1 a2(2,4);
	a1+a2;
}

