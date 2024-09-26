#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> v;
    v.push_back({12,34,6,5});
    // for(auto i=0; i<v.size(); i++){
    //     for(auto j=0; j<v[i].size(); j++){
    //         cout<<v[i][j]<<" ";
    //     }
    // }
   vector<vector<int>>:: iterator i;
   vector<int>:: iterator j;
   for(i=v.begin(); i<v.end(); i++){
       for(j=i->begin(); j<i->end(); j++){
           cout<<*j<<" ";
       }
   }
    return 0;
}

