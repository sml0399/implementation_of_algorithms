#include <iostream>
#include <string>
using namespace std;
int main(void){
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int lines=0;
  cin>>lines;
  string new_input="";
  for(int i=0;i<lines;i++){
    cin>>new_input;
    int temp_sum=0;
    int counter=0;
    for(int j=0;j<new_input.length();j++){
      if(new_input[j]=='O'){
	counter++;
      }else{
	counter=0;
      }
      temp_sum+=counter;
    }
    cout<<temp_sum<<"\n";
  }  
  return 0;
}
