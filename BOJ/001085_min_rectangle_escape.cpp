#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
  int a,b,c,d;
  int info[4]={0,0,0,0};
  cin>>a>>b>>c>>d;
  info[0]=a;
  info[1]=b;
  info[2]=c-a;
  info[3]=d-b;
  cout<<*minmax_element(begin(info),end(info)).first<<endl;
  return 0;
}
