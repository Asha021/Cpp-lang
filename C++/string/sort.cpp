#include<iostream>
#include<string>
using namespace std;
int main(){
   string str = "dcba";
   int tmp=0;
   int j=0;
   for(int i=0; i<str.length(); i++)
   {
   	 for(j=i+1; j<str.length(); j++)
   	{
   	 	if(str[j]<str[i])
   	 	{
   	 	  tmp = str[i];
   	 	  str[i] = str[j];
   	 	  str[j] = tmp;
		}
		
	}
    	cout<<str[i];
   }
   
}
