#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int num_count=0;
  int new_num=0;
  int max_num=-1000001;
  int min_num=1000001;
  cin>>num_count;
  for(int i=0;i<num_count;i++){
    cin>>new_num;
    max_num=(max_num>new_num)?max_num:new_num;
    min_num=(min_num<new_num)?min_num:new_num;
  }
  cout<<min_num<<" "<<max_num<<"\n";
  return 0;
}
