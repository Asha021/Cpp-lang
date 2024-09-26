#include<iostream>
using namespace std;
	class A{
//		private:
			public:A()
				{
				cout<<"A well done\n";	
				}
	};
	class B : public A{

			public:
				B(){
				cout<<"B well done\n";	
				}
	};
	class C : public B{
//		private:
			public:C()
				{
				cout<<"C well done\n";	
				}
	};
	class Dark: public C{
//		private:
			public:Dark()
				{
				cout<<"D well done\n";	
				}
	};

int main(){
	D call;
}
