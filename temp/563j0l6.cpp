#include <iostream>
using namespace std;
int  main(){
  vector<int>v;
  int x;
  for(int i=0;i<5;i++){
    cin>>x;
    v.push_back(x);
  }
  for(int x:v){
    cout<<x<<" ";
  }
  return 0;
}