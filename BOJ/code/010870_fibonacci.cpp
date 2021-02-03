#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int target_number=0;
  vector<int> fibo={0,1};
  cin>>target_number;
  if(target_number==0){
    cout<<0<<endl;
    return 0;
  }
  if(target_number==1){
    cout<<1<<endl;
    return 0;
  }
  for(int i=2;i<=target_number;i++){
    fibo.push_back(fibo[i-2]+fibo[i-1]);
  }
  cout<<fibo[target_number]<<endl;
  return 0;
}
