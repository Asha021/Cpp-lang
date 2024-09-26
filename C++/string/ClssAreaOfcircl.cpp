#include<iostream>
using namespace std;
class Circle{
	private : 
    int radius;
	public:
		Circle(){
        this -> radius;		
	}
	void setradius(int radius){
		this -> radius = radius;
	}
	int getradius(){
		return this -> radius;
	}	
	void calculateArea(){
		   cout<<2*3.14*radius<<endl;
	}
	void circum(){
    	   cout<<3.14*radius*radius;
	}	
};
int main(){
	Circle a;
	a.setradius(4);
	a.calculateArea();
	a.circum();

} 
