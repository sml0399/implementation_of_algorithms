#include <iostream>
using namespace std;
int main(void){
  int given=0;
  cin>>given;
  if(given==0){cout<<1<<endl;return 0;}
  int result=1;
  for(int i=1;i<=given;i++){
    result*=i;
  }
  cout<<result<<endl;

  return 0;
}
