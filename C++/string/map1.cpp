#include<iostream>
#include<map>
using namespace std;
int main(){
     map<char,int> map1;
     map1['j'] = 67;
     map1['a'] = 23;
    //  map1.insert(make_pair('x',77));
    //  map1.insert(make_pair('r',87));
     cout<<map1['j']<<" "<<map1['a'];
     cout<<"\n";
     for(auto i=map1.begin(); i!=map1.end(); i++){
         cout<<"key : "<<i->first<<" value "<<i->second<<endl;
     }
     cout<<"using irreter "<<endl;
     map<char,int>:: iterator i;
     for(auto i=map1.begin(); i!=map1.end(); i++){
         cout<<"key : "<<i->first<<" value "<<i->second<<endl;
     }
     i=map1.find('a');
     cout<<"\nfound "<<i->second<<" at key "<<i->first<<endl;
     
}
