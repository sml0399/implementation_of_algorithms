#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int a=0,b=0;
  cin>>a>>b;
  vector<int> second_num={};
  while(1){
    second_num.push_back(a*(b%10));
    cout<<second_num.back()<<endl;
    b=b/10;
    if(b==0)break;
  }
  int result=0;
  int num_iter=second_num.size();
  for(int i=0;i<num_iter;i++){
    result=result*10+second_num.back();
    second_num.pop_back();
  }
  cout<<result<<endl;

  return 0;
}
