#include<iostream>
using namespace std;
//class First{
//	private:
//		int f1,f2;
//	public:
//		First(int f1, int f2){
//			this -> f1 = f1;
//			this -> f2 = f2;
//	}
//	friend void operator<<(ostream out, First f);
//};
// void operator<<(ostream out, First f){
//	cout<<f.f1<<"+"<<f.f2<<"i";
//} 
//
//int main(){
//	First g(6,4);
//	cout<<g;
//} 

//class First{
//	private:
//		int f1,f2;
//	public:
//		First(int f1, int f2){
//			this -> f1 = f1;
//			this -> f2 = f2;
//	}
//	friend void operator>>(istream &out, First f);
//	friend void operator<<(ostream& out, First f);
//
// 
//};
// void operator>>(istream &out, First f){
// 	
//	cin>>f.f1>>f.f2;
//} 
// void operator<<(ostream& out, First f){
//	cout<<f.f1<<"+"<<f.f2<<"i";
//}
//int main(){
//	First g(20,388);
//	cin>>g;
//	cout<<g;
//}

class First{
	private:
		int f1,f2;
	public:
		First(int f1, int f2){
			this -> f1 = f1;
			this -> f2 = f2;
	}
	 friend istream& operator>>(istream &in, First f);
	 friend void operator<<(ostream& out, First f);
 
};
 void operator<<(ostream& out, First f){
	cout<<f.f1<<"+"<<f.f2<<"i";
}
 istream& operator>>(istream &in, First f){
 	
	in>>f.f1;
	in>>f.f2;
	cout<<f.f1<<"+"<<f.f2<<"i"<<endl;
} 
int main(){
	First g(20,388);
	cin>>g;
	cout<<g;
}


