#include <iostream>
#include <vector>
using namespace std;
int main(void){
  int num_iter=0;
  int target=0;
  cin>>num_iter;
  vector<int> zero_count={1,0};
  vector<int> one_count={0,1};
  int manage_length=1;
  for(int i=0;i<num_iter;i++){
    cin>>target;
    while(manage_length<target){
      zero_count.push_back(zero_count[manage_length]+zero_count[manage_length-1]);
      one_count.push_back(one_count[manage_length]+one_count[manage_length-1]);
      manage_length++;
    }
    cout<<zero_count[target]<<" "<<one_count[target]<<endl;
    
    

  }
  return 0;
}
