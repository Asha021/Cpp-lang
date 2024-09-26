#include<iostream>
using namespace std;
class Grocery	
{
   private :
   string ProductName;
   float weight;
   int quantity;
   public :
   Grocery()
   {
   	cout<<"heyy....\n";
   	this -> ProductName = "";
   	this -> weight = 0;
   	this -> quantity = 0;
   }
   void setnme(string nme){
      this -> ProductName = nme;
   }
   string getnme(){
   	return this -> ProductName;
   }
   void setwght(int wght){
   	this -> weight = wght;
   }
   int getwght(){
   	return this -> weight;
   }
   void setqty(int qty){
   	this -> quantity = qty;
   }
   int getqty(){
   	return this ->  quantity;
   }
};
class Laptop2 : public Grocery{
	private :
		int price;
	public :
		Laptop2(){
		  this -> price = 0;
		  cout<<"welcome";
		}
	void print(){
		cout<<"\nits me\n";
	}
		
};
int main(){
	Laptop2 call;
	call.print();
	cout<<"ProductName :- ";
	call.setnme("Rice\n");
	cout<<call.getnme();
	cout<<"ProductWeight :- ";
	call.setwght(1);
	cout<<call.getwght()<<endl;
	cout<<"ProductQuantity  :- ";
	call.setqty(5);
	cout<<call.getqty();
}
