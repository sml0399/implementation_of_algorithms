#include <iostream>
#include <cmath>
using namespace std;
int main(void){
  int a,b,c;
  while(1){
    cin>>a>>b>>c;
    if((a+b+c)==0)
      return 0;
    if(a*a==(b*b+c*c)){
      cout<<"right"<<endl;
      continue;
    }
    if(b*b==(a*a+c*c)){
      cout<<"right"<<endl;
      continue;
    }
    if(c*c==(b*b+a*a)){
      cout<<"right"<<endl;
      continue;
    }
    cout<<"wrong"<<endl;
  }
  return 0;
}
