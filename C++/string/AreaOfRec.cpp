#include<iostream>
using namespace std;
class Rec{
	private:
	int len,width;
	public: 
	Rec(){
	 this -> len;
	 this -> width;
	}
	void setlen(int len){
		this -> len = len;
	}
	int getlen(){
	 return	this -> len;
	}
	void setwidth(int width){
		this -> width = width;
	}
	int getwidth(){
		return this ->width;
	}
	void AreaOfRec(){
		cout<<len*width<<endl;
	}
	void AreaOfPera(){
		cout<<2*len*width;
	}
}; 
int main(){
	Rec a;
	a.setlen(2);
	a.setwidth(5);
	a.getlen();
	a.getwidth();
	a.AreaOfRec();
	a.AreaOfPera();
}
