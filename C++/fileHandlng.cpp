#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
//	string fileName = "NewFile.txt";
	char data[] = "Hiiii...";
//	ofstream writeInto;
//	writeInto.open("NewFile.txt");
    
//	ifstream fin;
//	fin.open("aasha.txt");
//	fin.close();
////	writeInto.close();
//	ifstream fun;
//	fun.open("aasha.txt");
//	if(fun){
//		cout<<"File present";
////		fun.write(data,100);
//	}else{
//		 fun.close();
//	}
	
//	string fileString;
//	
//	ofstream fout;
//	fout.open("NewFile.txt");
//	
//	if(fout){
//		cout<<"File is present"<<endl;
//		fout.write(data,100);
//	}else{
//		fout.close();
//	}

	ofstream file;
	file.open("asha.txt");
	if(file.is_open()){
		cout<<"File opened successfully..."<<endl;
	}else{
		cout<<" Something wrong.."<<endl;
	}
	file.close();
	fstream  of1("aaa.txt", ios::in | ios::out | ios::app);
	
	if(of1.is_open())
	{
			cout<<"aaa.txt" << "File opened successfully..."<<endl;
			
//			of1.write(data, 20);
			of1.write("svhsj shd", 10);
	}else{
		cout<<" Something wrong.."<<endl;
	}
	

}

