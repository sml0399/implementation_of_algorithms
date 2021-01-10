#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(void){
  long long min_num=0,max_num=0;
  cin>>min_num>>max_num;
  vector<bool> is_square_num(max_num-min_num+1,false);
  long long i=0;
  for(i=2;i<=sqrt(max_num);i++){
    long long interest=i*i;
    long long target=interest*(min_num/interest);
    if(min_num%interest!=0) target+=interest;
    while(target<=max_num){
      is_square_num.at(target-min_num)=true;
      target+=interest;
    }
  }
  long long sum_result=0;
  for(i=0;i<is_square_num.size();i++){
    if(is_square_num[i]==false)sum_result+=1;
  }
  cout<<sum_result<<endl;


  return 0;
}
