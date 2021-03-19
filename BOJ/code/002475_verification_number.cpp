#include <iostream>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int in_num=0,result=0;
  for(int i=0;i<5;i++){
    cin>>in_num;
    result+=(in_num*in_num);
  }
  cout<<(result%10)<<"\n";
  return 0;
}
