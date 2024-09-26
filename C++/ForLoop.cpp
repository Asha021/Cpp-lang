#include<iostream>
using namespace std;
//int first(int);
//int first(int s){
//    int flag=0;
//    int j,i;
//		for(j=2; j<s; j++)
//	    {
//	    if(s%j==0)
//		{
////		cout<<i;
//		flag = 1;
////		return true;
//		break;
//		}
//	}
//       if(flag==0){
////       	cout<<"Not prime"<<i;
//       	return true;
//	   }
//	   return false;
//	
//	
//}
//int main(void){
//  int flag,i,s;
//    cin>>s;
//  	for(i=s; i>=2; i--){
//  	if(first(i)==true){
//   	cout<<i;
//   	break;
//    }
//    }  
//}


//int main(){
//	 int a = 25;
//     int b = 15;
//	cout<<"Enter first no: ";
//	cin>>a;
//    cout<<"Enter sec no: ";
//	cin>>b;
//   int i = 0;
//   for(int i = 2; i <= a && i <= b; i++){
//      if(a%i==0 && b%i==0){
//      	cout<<"GCD IS : "<<i<<endl;
//	  }else{
//	  	cout<<" NO GCD ";
//	  	break;
//	  }
//}
//}

//int main(){
//	int i=0,a=0;
//	for(i=1; i<=10; i++){	    
//         a = a + i;
//	}
//	cout<<a;
//}

//int main(){
//	int a =0;
//	for(int i=1; i<=7; i++){
//		a = a + i;
//	}
//	cout<<a;
//}

//int main(){
//	int a = 0;
//	cout<<"ENTER A NO ";
//	cin>>a;
//	if(a%2==0){
//		cout<<"not prime";
//	}else{
//		cout<<" prime";
//	}
//}

//int main(){
//	cout<<"Enter starting and ending no of prime no\n";
//	int srt;
//	int end;
//	int ctr,ans;
//	cin>>srt>>end;
//	for(int i=srt; i<end; i++){
//		for(int j=2; j<i; j++)
//	    {
//	    	if(i%j==0)
//            ctr++;
//		}
//		if(ctr==0 && i != 1){
//			ans++;
//			cout<<i<<" ";
//		}
//		ctr=0;
//	}
//	cout<<"\nTOTAL PRIME IS : "<<ans;
//}


//int main(){
//	int num;
//	cin>>num;
//	int fact = 1;
//	for(; num!=0; num--){
//		fact = fact*num;
//	}
//	cout<<fact;
//}

//int main(){
//	int a = 1234;
//	int b = 0,sum=0,r=0;
//	b = a;
//	while(a>0){
//		r = a%10;
//		a = a/10;
//		sum = sum+r;
//	}
//	cout<<sum;
//}


int main(){
   int num=5;
   for(int i=1; i<=num; i++)
   {
   	cout<<1/i*i;
   }
}

