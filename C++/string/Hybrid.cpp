#include<iostream> 
using namespace std;
class Top{
	public:
		Top(){
			cout<<"heyy bro1\n";
		}
		Top(int a,int b){
			cout<<"heyy bro1-1\n";
		}
}; 
class Mid : public Top{
	public:
		Mid(){
			cout<<"heyy bro2\n";
		}
		Mid(int a,int b){
			cout<<"heyy bro2-2\n";
		}
}; 
class Left: public Top{
	public:
		 Left(){
			cout<<"heyy bro3\n";
		}
		 Left(int a,int b){
			cout<<"heyy bro3-3\n";
		}
}; 
class Right: public Left{
	public:
		Right(){
			cout<<"heyy bro4\n";
		}
		Right(int a,int b){
			cout<<"heyy bro4-4\n";
		}
}; 
class Bottm : public Right,public Left{
	public:
		Bottm(){
			cout<<"heyy bro5\n";
		}
		Bottm(int a,int b){
			cout<<"heyy bro5-5\n";
		}
}; 
int main(){
	Bottm  el(2,2);
} 
