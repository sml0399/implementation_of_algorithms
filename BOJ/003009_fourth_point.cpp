#include <iostream>
using namespace std;
int main(void){
  int val[4]={0,0,0,0};
  int stat[4]={0,0,0,0};
  int a,b;
  for(int i=0;i<3;i++){
    cin>>a>>b;
    if(val[0]==0){
      val[0]=a;
      stat[0]++;
    }else if(val[0]!=a){
      val[1]=a;
      stat[1]++;
    }else
      stat[0]++;
    if(val[2]==0){
      val[2]=b;
      stat[2]++;
    }else if(val[2]!=b){
      val[3]=b;
      stat[3]++;
    }else
      stat[2]++;
  }
  a=(stat[0]>stat[1])?val[1]:val[0];
  b=(stat[2]>stat[3])?val[3]:val[2];
  cout<<a<<" "<<b<<endl;


  return 0;
}
