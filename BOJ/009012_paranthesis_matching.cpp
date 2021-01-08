#include <iostream>
#include <string>
using namespace std;
int main(void){
  int num_input=0;
  string test_input="";
  cin>>num_input;
  for(int i=0;i<num_input;i++){
    bool done=false;
    cin>>test_input;
    int summation=0;
    for(int j=0;j<test_input.length();j++){
      if(test_input[j]=='(')summation++;
      else if(test_input[j]==')')summation--;
      if(summation<0){cout<<"NO"<<endl;done=true;break;}
    }
    if(done){continue;}
    cout<<((summation==0)?"YES":"NO")<<endl;

  }

  return 0;
}
