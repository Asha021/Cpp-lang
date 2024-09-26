#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fun(vector<int> v){
    bool ret = false;
    for(auto i=0,j=1; i<v.size() && j<v.size(); i++,j++)
    {
        if(v[j]-v[i] != 1)
        return ret;
    }
    ret = true;
    return ret;
}
int main(){
    vector<int> v = {2,3,4,5,6};
    cout<<fun(v);
}
