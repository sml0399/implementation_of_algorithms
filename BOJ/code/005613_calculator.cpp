#include <iostream>
#include <string>
using namespace std;
int main(void){
  int number=0;
  string character="";
  int prev_num=0;
  cin>>prev_num;
  while(1){
    cin>>character;
    if(character=="=") break;
    cin>>number;
    if(character=="+")prev_num+=number;
    else if(character=="-")prev_num-=number;
    else if(character=="*")prev_num*=number;
    else if(character=="/")prev_num/=number;
  }
  cout<<prev_num<<endl;
  return 0;
}
