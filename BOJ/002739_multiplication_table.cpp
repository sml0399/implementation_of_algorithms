#include <iostream>
using namespace std;
int main(void){
  int base=0;
  cin>>base;
  for(int i=1;i<10;i++){
    cout<<base<<" * "<<i<<" = "<<(i*base)<<endl;
  }
  return 0;
}
