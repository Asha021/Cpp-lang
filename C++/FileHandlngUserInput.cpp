#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string fileNme = "TxtFile.txt";
	ofstream write;
	write.open("TxtFile.txt");
	string input;
	while(write){
		getline(cin,input,'.');
		write<<input;
		break;
	}
	write.close();
	ifstream read;
	read.open("TxtFile.txt");
	
	while(read){
		getline(read,input,'.');
		cout<<input;
		break;
	}
	read.close();
} 
