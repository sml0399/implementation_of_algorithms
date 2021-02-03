#include <iostream>
#include <string>
using namespace std;
int main(void){
  int cases=0;
  cin>>cases;
  string two_num="";
  getline(cin,two_num);
  for(int i=0;i<cases;i++){
    getline(cin,two_num);
    int space_index=two_num.find(",");
    int num1=stoi(two_num.substr(0,space_index));
    int num2=stoi(two_num.substr(space_index+1));
    cout<<(num1+num2)<<endl;
  }

  return 0;
}
