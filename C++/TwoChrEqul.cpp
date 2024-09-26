#include<iostream>
//#include<sting>
using namespace std;
int main(){
	string str ="aabcd";
	int k,nxt,tmp,flag=0;
	int i,j;
	for(i=0; i<str.size(); i++)
	{
		for(j=i+1; j<str.size(); j++)
		{
			if(str[i]==str[j])
		    {     	
			   flag = 1;
			   tmp = str[i];
			}
			
		}
	}
  for(int k=0; k<2; k++)
  {
  	if(flag==1)
  	{
  		cout<<"true";
  		break;
	}else
	{
		cout<<"false";
		break;
	}

}
}

