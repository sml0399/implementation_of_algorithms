#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int init_num=0;
  cin>>init_num;
  int left_num=0,right_num=0,result_num=init_num,counter=0;
  while(1){
    left_num=result_num/10;
    right_num=result_num%10;
    result_num=right_num*10+(right_num+left_num)%10;
    counter++;
    if(result_num==init_num) break;
  }
  cout<<counter<<"\n";

  return 0;
}
