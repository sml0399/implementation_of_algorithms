#include <iostream>
#define ll long long
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ll i,new_num=0,in_num=0,sum_num=0;
  cin>>in_num;
  sum_num=in_num*(in_num+1)/2;
  for(i=0;i<in_num-1;i++){
    cin>>new_num;
    sum_num-=new_num;
  }
  cout<<sum_num<<"\n";
  return 0;
}
