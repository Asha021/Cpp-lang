#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v = {1 ,2, 5, 0, 3, 1, 7,2,3,8,5,6,6};
    // for(int i=0; i<v.size();  i++)
    //  {
    //     //  cout<<i << "\n";
    //   for(int k = i+1; k<v.size(); k++)
    //   {
    //       if(v[i] > v[k])
    //       {
    //           cout<<i<<"  "<<k << "\n";
    //           if(v[i+2]>v[k])
    //             {
    //                 cout<<v[k] << " yaha se "<<endl;
    //             break;
    //             }
    //       }
    //   }
    //  }
    
    
    
    for(int i=1; i<v.size()-1; i++)
    {
        if(v[i] < v[i-1]  && v[i] < v[i+1])
        {
            cout<<v[i] << "   ";
        }
    }
  
    
     return 1;
}
