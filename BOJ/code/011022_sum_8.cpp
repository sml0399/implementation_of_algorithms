#include <iostream>
using namespace std;
int main(void){
  int cases=0,a=0,b=0;
  cin>>cases;
  for(int i=0;i<cases;i++){
    cin>>a>>b;
    cout<<"Case #"<<(i+1)<<": "<<a<<" + "<<b<<" = "<<(a+b)<<endl;
  }
  return 0;
}
