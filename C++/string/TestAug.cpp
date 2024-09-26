#include<iostream>
using namespace std;

//2
//class Lap1{
//	public:
//		Lap1(){
//		 cout<<"Hello1....."<<endl;	
//		}
//};
//class Lap2{
//	public:
//		Lap2(){
//		   cout<<"Hello2....."<<endl;	
//		}
//	
//};
//class Lap3{
//	public:
//		Lap3(){
//		 cout<<"Hello3....."<<endl;	
//		}
//};
//class Lap4 : public Lap1, public Lap2, public Lap3{
//	public:
//		Lap4(){
//		 cout<<"Hello4....."<<endl;	
//		}
//};
//int main(){
//	Lap4 go;
//}

//1
//class A1{
//	public:
//		A1(){}
//		void A(){
//			cout<<"hiiA1...";
//		}
//};
//
//class A3:public A1{
//	public:
//		A3(){}
//		void A(){
//			cout<<"hiiA3...";
//		}
//};
//int main(){
//	A3 h;
//	h.A();
//}

//3

template <class a1>
class Comp{
	private:
		a1 a;
		public:
		Comp(a1=8){
			this  -> a = a;
		}
		int add(){
		  a+a;
		}
		friend int operator ++(Comp <int>com1);
		
};
int operator ++(Comp <int>com1){
cout<<com1.a++<<"+"<<com1.a<<"i";
}
int main(){
    Comp <int>a1(9);
    cout<<a1.add(2,7);
//	cout<<a1(2,4);

}
