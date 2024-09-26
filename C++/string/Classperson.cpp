#include<iostream>
using namespace std;
class Person{
	private:
		string nme;
		int age;
		string country;
		public:
		Person(){
			this -> nme="a";
			this -> age=0;
			this -> country="w";
		}
		void setnme(string nme){
			this -> nme=nme;
		}
		string getnme(){
			return this -> nme;
		}
		void setage(int age){
			this -> age=age;
		}
		int getage(){
			return this -> age;
		}
		void setcountry(string country){
			this -> country=country;
		}
		string getcountry(){
			return this -> country;
		}	
};
int main(){
	Person a;
	cout<<a.setnme("asha");
	get
	cout<<a.getage(20);
	cout<<a.getcountry("faridabad");
} 
