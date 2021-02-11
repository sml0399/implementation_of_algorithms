#include <iostream>
#include <string>
using namespace std;
int main(void){
  int alpha[26];
  int i=0;
  string input_string="";
  for(i=0;i<26;i++){
    alpha[i]=-1;    
  }
  cin>>input_string;
  for(i=0;i<input_string.length();i++){
    if (alpha[input_string[i]-'a']==-1)
      alpha[input_string[i]-'a']=i;
  }
  for(i=0;i<26;i++){
    cout<<alpha[i];
    if(i<25)
      cout<<" ";
  }
  cout<<endl;
  return 0;
}
