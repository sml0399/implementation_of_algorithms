#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int count_numbers=0;
  cin>>count_numbers;
  int max_num=-1;
  double average=0;
  int new_num;
  for(int i=0;i<count_numbers;i++){
    cin>>new_num;
    average+=new_num;
    max_num=(max_num<new_num)?new_num:max_num;
  }
  average/=count_numbers;
  average=average*100/max_num;
  cout<<average<<endl;
  return 0;
}
